void delete_lista_pos(Lista *l, int pos){

  // LOCALIZA A CELULA COM ESSE codigo
  Celula *ant = l->inicio;
  Celula *tmp = l->inicio->prox;

  while(tmp!=NULL && pos > 0){
    ant = ant->prox;
    tmp = tmp->prox;
    pos--;
  }

  if(tmp!=NULL){

    ant->prox = tmp->prox;

    free(tmp);
    tmp = NULL;

    // VERIFICA SE EH O ULTIMO ELEMENTO
    if(ant->prox == NULL){
      l->fim = ant;
    }

    l->tam--;
  }
}

void delete_lista_begin(Lista *l){
  delete_lista_pos(&estoque, 0);
}
