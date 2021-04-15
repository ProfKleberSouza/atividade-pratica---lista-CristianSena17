void add_lista_begin(Lista *l, Produto p) {
  l->inicio->dado = p;
  Celula *tmp = new_celula();
  tmp->prox = l->inicio;
  l->inicio = tmp;

  l->tam++;
}