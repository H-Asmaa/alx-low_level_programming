#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

int main(int argc, char **argv) {
  MD5_CTX ctx;
  unsigned char hash[MD5_DIGEST_LENGTH];
  char *input = NULL;
  int i;

  if (argc != 2) {
    puts("Access Denied");
    return 1;
  }

  for (i = 1; i < argc; i++) {
    if (strncmp(argv[i], "jennieandjayloveasm=", 20) == 0) {
      input = argv[i] + 20;
      break;
    }
  }

  if (!input) {
    puts("Access Denied");
    return 1;
  }

  MD5_Init(&ctx);
  MD5_Update(&ctx, input, strlen(input));
  MD5_Final(hash, &ctx);

  char md5_str[33] = { 0 };
  for (i = 0; i < MD5_DIGEST_LENGTH; i++)
    sprintf(md5_str + i*2, "%02x", hash[i]);

  if (strcmp(md5_str, "e99a18c428cb38d5f260853678922e03") == 0) {
    puts("Access Granted");
    return 0;
  } else {
    puts("Access Denied");
    return 1;
  }
}