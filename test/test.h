#include <stdio.h>
#include <stdlib.h>

#include <ece.h>

// This macro is similar to the standard `assert`, but accepts a format string
// with an informative failure message.
#define ece_assert(cond, format, ...)                                          \
  do {                                                                         \
    if (!(cond)) {                                                             \
      ece_log(__func__, __LINE__, #cond, format, __VA_ARGS__);                 \
      abort();                                                                 \
    }                                                                          \
  } while (0)

// Logs an assertion failure to standard error.
void
ece_log(const char* funcName, int line, const char* expr, const char* format,
        ...);

void
test_webpush_aesgcm_params_ok();

void
test_webpush_aesgcm_params_err();

void
test_webpush_aesgcm_encrypt_ok();

void
test_webpush_aesgcm_decrypt_ok();

void
test_webpush_aesgcm_decrypt_err();

void
test_webpush_aes128gcm_encrypt_ok();

void
test_webpush_aes128gcm_decrypt_ok();

void
test_aes128gcm_decrypt_err();

void
test_base64url_decode();
