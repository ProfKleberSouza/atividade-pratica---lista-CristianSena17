void print_lista(Lista *l){
  Celula *tmp = l->inicio->prox;
  while(tmp != NULL){
    print_produto(tmp->dado);
    tmp = tmp->prox;
  }
}