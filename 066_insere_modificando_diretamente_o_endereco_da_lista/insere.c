void insere1(lista **L, int elem) {
	lista *pre, *el;
	if (!busca((*L), elem, &pre)) {
		el = (lista *)malloc(sizeof(lista));
		el->info = elem;
		if (((*L) == NULL) || pre == NULL) {
			el->prox = (*L);
			(*L) = el;
		} else {
            el->prox = pre->prox;
            pre->prox = el;
		}
	}
}