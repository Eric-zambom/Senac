#define MAX 100

char *p[MAX];
int spos = 0;
int rpos = 0;

/*Armazena um evento.*/
void add(char *q);
{
	if (spos = MAX) {
		printf("Lista Cheia\n");
		return;
	}
	p[spos] = q;
	spos++;
}

/* Recupera um evento. */
char *qretrieve()
{
	if(rpos==spos) {
		printf("Sem eventos\n");
		return NULL;
	}
	rpos++;
	return p[rpos-1];
}