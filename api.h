extern unsigned long long crypto_secretkeybytes;
extern unsigned long long crypto_publickeybytes;
extern unsigned long long crypto_ciphertextbytes;
extern unsigned long long crypto_bytes;
extern unsigned long long crypto_message_bytes;
extern unsigned long long crypto_pseudorandom_secret_bytes;
extern char* PROG_NAME;
// #define OPEN_LOG

int crypto_kem_keypair(unsigned char *pk, unsigned char *sk);

int crypto_kem_enc(unsigned char *ct, unsigned char *ss, const unsigned char *pk);

int crypto_kem_dec(unsigned char *ss, const unsigned char *ct, const unsigned char *sk);


