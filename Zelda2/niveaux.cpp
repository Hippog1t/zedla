#include "niveaux.h"

Niveaux::Niveaux()
{
    this->niveauActuel = 0;
    this->quete = NULL;
    this->statusPontLevis=0;

}

void Niveaux::chargerNiveau()
{
    if ((this->niveauActuel == 0)||(this->niveauActuel == -1)||(this->niveauActuel == -2)){
        int x[15][30]={{1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,1,1,1,1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,1,1,1,1,0,1,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                      {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
        this->setMatrice(x);

    }
   else if (this->niveauActuel == 1)
    {

    int x[15][30]=
    {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
     {1,1,1,1,1,1,10,11,11,11,11,11,11,11,11,11,11,11,11,11,12,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,1,13,14,14,14,14,14,14,14,14,14,14,14,14,14,14,1,0,0,0,0,0,0,0,1},
     {1,1,1,29,0,1,16,17,17,17,17,17,17,17,17,17,17,17,17,17,18,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,0,0,0,0,0,0,29,29,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,0,0,29,29,0,0,29,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,29,0,0,29,0,0,0,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
     {1,1,29,0,0,0,0,0,0,29,0,0,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,1},
     {1,1,1,0,0,29,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1},
     {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1},
     {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
    this->monstres.clear();
    this->mapItems.clear();
    this->setMatrice(x);
    this->setQuete(new Quete("1_debut"));
    this->monstres.push_back(new Ennemis(300,300,"left","crabe_bleu_"));
    //this->monstres.push_back(new Ennemis(310,340,"left","crabe_bleu_"));
    //this->monstres.push_back(new Ennemis(290,380,"left","crabe_bleu_"));

    this->monstres.push_back(new Ennemis(400,250,"up","bouche_bizarre_"));
    this->monstres.push_back(new Ennemis(250,400,"right","bouche_bizarre_"));
    this->monstres.push_back(new Ennemis(500,400,"down","bouche_bizarre_"));
    this->monstres.push_back(new Ennemis(400,400,"right","bouche_bizarre_"));
    this->monstres.push_back(new Ennemis(300,430,"left","bouche_bizarre_"));
    this->monstres.push_back(new Ennemis(250,460,"right","bouche_bizarre_"));
    this->monstres.push_back(new Ennemis(800,250,"up","gardien_clef_orange_"));

    this->mapItems.push_back(new item(800,500,"keyaccesslevelup"));

    this->mapItems.push_back(new item(640,500,"porteDesEnfers"));





    //this->musique->setLoops(10);

    } else if(this->niveauActuel==2){
        int x[15][30]=
        {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,1,1,1,1,1,1,1,1,1,1,10,11,11,11,11,12,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,1,1,1,1,1,1,1,1,1,1,13,20,26,26,22,15,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,29,0,0,29,0,0,0,0,0,1,13,21,24,24,21,15,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,29,0,0,29,0,0,0,0,0,1,13,21,24,24,21,15,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,29,0,0,29,0,0,0,0,0,1,13,21,24,24,21,15,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,29,0,0,29,0,0,0,0,0,1,13,21,24,24,21,15,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,29,0,0,29,29,29,29,29,29,1,13,21,24,24,21,15,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,29,0,0,0,0,0,0,0,0,0,1,20,21,24,24,21,22,30,1,30,1,30,1,30,30,30,1,1},
         {1,1,1,0,0,0,29,0,0,0,0,0,0,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,1},
         {1,1,1,29,0,0,0,0,0,0,0,0,0,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,1},
         {1,1,1,0,0,0,0,0,0,0,0,0,1,23,21,24,24,21,25,30,1,1,30,1,1,30,30,30,1,1},
         {1,1,1,0,0,29,0,0,29,0,0,0,1,13,23,21,21,25,15,1,1,1,1,1,1,1,1,1,1,1},
         {1,1,1,0,0,0,0,0,0,0,0,0,1,16,17,17,17,17,18,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
        this->monstres.clear();
        this->mapItems.clear();
        this->setMatrice(x);
        this->monstres.push_back(new Ennemis(200,400,"down","crabe_orange_"));
        this->monstres.push_back(new Ennemis(400,400,"right","crabe_orange_"));
        this->monstres.push_back(new Ennemis(300,500,"right","crabe_orange_"));
        this->monstres.push_back(new Ennemis(300,600,"right","crabe_bleu_"));

       // this->monstres.push_back(new Ennemis(350,500,"down","crabe_bleu_"));
       // this->monstres.push_back(new Ennemis(200,500,"down","crabe_bleu_"));

        this->monstres.push_back(new Ennemis(1400,450,"down","boss_niveau_2_"));

        this->mapItems.push_back(new item(1300,410,"arrow_item"));
        this->mapItems.push_back(new item(1270,410,"arrow_item"));
        this->mapItems.push_back(new item(1330,410,"arrow_item"));

        this->mapItems.push_back(new item(1155,410,"heart"));
        this->mapItems.push_back(new item(1055,410,"heart"));
        this->mapItems.push_back(new item(955,410,"heart"));

        this->mapItems.push_back(new item(1270,560,"arrow_item"));
        this->mapItems.push_back(new item(1300,560,"arrow_item"));
        this->mapItems.push_back(new item(1330,560,"arrow_item"));

        this->mapItems.push_back(new item(1440,480,"porteDesEnfers"));
        //this->quete=new Quete("2");

    }else if(this->niveauActuel==3){
        int x[15][30]=
        {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                 {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1,1,1,1,1,1},
                 {1,31,31,31,31,112,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                 {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                 {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                 {1,31,31,31,111,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                 {1,31,31,31,31,31,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                 {1,31,112,111,111,111,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,1},
                 {1,31,112,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                 {1,31,112,31,10,11,11,11,12,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                 {1,31,111,113,111,111,111,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                 {1,31,111,111,111,113,113,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                 {1,31,31,31,16,17,17,17,18,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                 {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1},
                 {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
        this->mapItems.clear();
        this->monstres.clear();
        this->setMatrice(x);
        this->monstres.push_back(new Ennemis(1000,200,"right","final_boss_"));
        this->mapItems.push_back(new item(1430,480,"porteDesEnfers"));
        this->monstres.push_back(new Ennemis(1300,200, "sleep", "zelda"));

    }


}

void Niveaux::deleteMonstre(int i){
   if(monstres[i]->getType_of_monstre()=="gardien_clef_orange_"){
       ajouterMonstre(monstres[i]->getPosX(), monstres[i]->getPosY(),"right","chauve_souris_bleu_");
       ajouterMonstre(monstres[i]->getPosX(), monstres[i]->getPosY(),"up","chauve_souris_bleu_");
       ajouterMonstre(monstres[i]->getPosX(), monstres[i]->getPosY(),"down","chauve_souris_bleu_");
   }
    delete this->monstres[i];
    this->monstres.erase(this->monstres.begin()+i);



}

void Niveaux::ajouterItem(int posX, int posY, QString s)
{
    //on ajoute un item sur la carte à la position X et Y et dont le nom est ...
    this->mapItems.push_back(new item(posX, posY, s));
}

void Niveaux::deleteItem(int i)
{
    if(this->mapItems.size()!=0){
    delete this->mapItems[i];
    this->mapItems.erase(this->mapItems.begin()+i);
    }

}

void Niveaux::ajouterMonstre(int posX, int posY,QString direction ,QString nom)
{
    this->monstres.push_back(new Ennemis(posX,posY,direction ,nom));
    return;
}

void Niveaux::ajouterProjectileLancerParUnMonstre(Ennemis *ennemi)
{
    if (ennemi->getType_of_monstre()=="bouche_bizarre_"){
         int v1 =  rand() % 2;
        if (ennemi->getDeplacementMax() == 40 && v1==1){
            this->monstres.push_back(new Ennemis(ennemi->getPosX(),ennemi->getPosY(),ennemi->getDirection(),"boule_de_feu_"));
        }
    } else if(ennemi->getType_of_monstre()=="boss_niveau_2_"){
        if(ennemi->getPosYinitiale() == ennemi->getPosY()){
            int i = rand() % 3;
            this->monstres.push_back(new Ennemis(ennemi->getPosX(), ennemi->getPosY()+30*i, "left", "lambeau_boss_niveau_2_"));

        }

    }
}




void Niveaux::setMatrice(int tab[15][30]){
    /*  Prend en paramétre un tableau de format OBLIGATOIRE 15 hauteur, 30 largeur
     *  Puis la boucle créer un un vecteur de vecteur de int
     */
    this->carteMatrice.erase(this->carteMatrice.begin(),this->carteMatrice.end());
        for(int i = 0; i<15; i++){
            vector<int> v(tab[i], tab[i] + sizeof tab[i] / sizeof(int));
            this->carteMatrice.push_back(v);
        }
}
vector<vector<int> > Niveaux::getCarteMatrice() const
{
    return carteMatrice;
}

void Niveaux::setCarteMatrice(const vector<vector<int> > &value)
{
    carteMatrice = value;
}
int Niveaux::getNiveauActuel() const
{
    return niveauActuel;
}

void Niveaux::setNiveauActuel(int value)
{
    niveauActuel = value;

}
Ennemis *Niveaux::getEnnemi() const
{
    return ennemi;
}

void Niveaux::setEnnemi(Ennemis *value)
{
    ennemi = value;
}

vector<Ennemis *> Niveaux::getMonstres() const
{
    return monstres;
}

void Niveaux::setMonstres(const vector<Ennemis*> &value)
{
    monstres = value;
}
Quete *Niveaux::getQuete() const
{
    return quete;
}

void Niveaux::setQuete(Quete *value)
{
    quete = value;
}
vector<item *> Niveaux::getMapItems() const
{
    return mapItems;
}

void Niveaux::setMapItems(const vector<item *> &value)
{
    mapItems = value;
}
int Niveaux::getStatusPontLevis() const
{
    return statusPontLevis;
}

void Niveaux::setStatusPontLevis(int value)
{
    statusPontLevis = value;
}





void Niveaux::changerNiveau3quandLeMonstreEstTuer(){
    if(this->statusPontLevis<=3){
        this->statusPontLevis+=1;
    }
    if(this->niveauActuel == 3 && this->monstres.size()==1){
        if(this->statusPontLevis==1){
            int x[15][30]=
            {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                     {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1,1,1,1,1,1},
                     {1,31,31,31,31,112,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                     {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                     {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,111,30,30,30,30,1},
                     {1,31,31,31,111,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                     {1,31,31,31,31,31,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                     {1,31,112,111,111,111,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,1},
                     {1,31,112,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,112,31,10,11,11,11,12,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,111,113,111,111,111,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,111,111,111,113,113,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,31,31,16,17,17,17,18,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1},
                     {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
            setMatrice(x);
        } else if (this->statusPontLevis==2){
            int x[15][30]=
            {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                     {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1,1,1,1,1,1},
                     {1,31,31,31,31,112,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                     {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                     {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,111,111,30,30,30,30,1},
                     {1,31,31,31,111,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                     {1,31,31,31,31,31,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                     {1,31,112,111,111,111,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,1},
                     {1,31,112,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,112,31,10,11,11,11,12,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,111,113,111,111,111,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,111,111,111,113,113,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,31,31,16,17,17,17,18,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1},
                     {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
            setMatrice(x);
        } else {
            int x[15][30]=
            {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                     {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1,1,1,1,1,1},
                     {1,31,31,31,31,112,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                     {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                     {1,31,31,31,31,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,111,111,111,30,30,30,30,1},
                     {1,31,31,31,111,112,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,30,30,30,30,1},
                     {1,31,31,31,31,31,31,112,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,1,1,1,1,1,1},
                     {1,31,112,111,111,111,111,111,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,31,31,31,31,31,31,1},
                     {1,31,112,31,31,31,31,31,31,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,112,31,10,11,11,11,12,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,111,113,111,111,111,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,111,111,111,113,113,111,111,111,111,111,111,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,31,31,16,17,17,17,18,31,31,31,31,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,1},
                     {1,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,1},
                     {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
            setMatrice(x);
        }
}
};





