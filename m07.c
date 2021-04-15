void main(){
  Lista estoque;
  new_lista(&estoque);

  for(int i=0; i<5; i++){

    Produto p;
    p.codigo = i+1;
    sprintf(p.descricao, "Produto %d", i+1);
    p.valor = rand()%100;
    p.quantidade = rand()%50;

    add_lista_end(&estoque, p);   

  }
}

 

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


