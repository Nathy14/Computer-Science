class ponto{
  private int x;
  private int y;

  public ponto(int x, int y){ //construtor da classe
    this.x = x;
    this.y = y;
  }


  public void verifica(ponto n){ //verifica se dois pontos são iguais e printa na tela uma mensagem.
    if(this.x == n.x){
      if(this.y == n.y){
        System.out.print("Os pontos são iguais");
      }
      else{
        System.out.print("Os pontos não são iguais");
      }
    }
    else{
      System.out.print("Os pontos não são iguais");
    }
  }
}