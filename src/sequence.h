/* sequence.h - Generic sequence functions */

#ifndef __SEQUENCE_H_
#define __SEQUENCE_H_

#include <stdio.h>


/* Types definitions */

typedef struct {
  char *nam, *dsc, *str;
  char **acc, **kwd;
  size_t strlen;
  int ver, gi;
  int keycnt;
} sequence_t;

typedef enum {
  SEQFMT_UNKWN, SEQFMT_SPROT, SEQFMT_EMBL, SEQFMT_GENBANK, SEQFMT_PIR,
  SEQFMT_NBRF, SEQFMT_GDE, SEQFMT_IG, SEQFMT_FASTA, SEQFMT_GCG, SEQFMT_RAW,
  SEQFMT_NONE } seqfmt_t;

typedef enum {
  SEQTYP_UNKWN, SEQTYP_NUC, SEQTYP_PRO, SEQTYP_NONE } seqtyp_t;

/* Functions prototypes */

sequence_t *sequence_new(void);
void sequence_free(sequence_t *);

sequence_t *sequence_parse(FILE *, seqfmt_t);
int sequence_check(FILE *, seqfmt_t);

int sequence_strict(sequence_t *);
void sequence_print(FILE *, sequence_t *, seqfmt_t);

seqfmt_t sequence_format(FILE *);
seqtyp_t sequence_type(char *);

#endif /* __SEQUENCE_H_ */
