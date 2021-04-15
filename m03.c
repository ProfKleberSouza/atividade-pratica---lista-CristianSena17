Celula *new_celula(){

  Celula *tmp = (Celula*)malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}

void add_lista_end(Lista *l, Produto p){
  
  Celula *tmp = new_celula();
  tmp->dado = p;

  l->fim->prox = tmp;
  l->fim = tmp;
  l->tam++;
}