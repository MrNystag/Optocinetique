#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>

// Permet de pouvoir sortir du programme en appuyant sur la croix
class SystemManager {
    public:
        // Here we will just have a couple public members for example purposes.
        bool running;
        SDL_Event events;
        void inputManager(); // Handle input.
        void renderingManager(); // Handle drawing pretty pictures.
};

void SystemManager::inputManager() {
    while(SDL_PollEvent(&events)) {
        if(events.type == SDL_QUIT)
            running = false;
    }
}

void SystemManager::renderingManager() {
    // Draw pretty pictures...
}

int main( int argc, char *argv[ ] )
{
    SDL_Surface *screen;
    SystemManager sysMgr;
    sysMgr.running = true;
    int lastrender = 0;
    if( SDL_Init( SDL_INIT_JOYSTICK | SDL_INIT_VIDEO ) == -1 )
    {
        printf( "Can't init SDL:  %s\n", SDL_GetError( ) );
        return EXIT_FAILURE;
    }

    atexit( SDL_Quit );
    screen = SDL_SetVideoMode( 640, 432, 16, SDL_HWSURFACE ); // initialisation de l'ecran

    if( !screen)
    {
        printf( "Can't set video mode: %s\n", SDL_GetError( ) );
        return EXIT_FAILURE;
    }

    SDL_Rect position; // creation du point (rectangle)
    SDL_Rect position1;
    SDL_Rect position2;
    SDL_Rect position3;
    SDL_Rect position4;
    SDL_Rect position5;
    SDL_Rect position6;
    SDL_Rect position7;
    SDL_Rect position8;
    SDL_Rect position9;
    int r,g,b, nb_ligne, direction, vitesse, pas;

    vitesse = 1;
    pas =1;
    nb_ligne = 9;
    r= 250;
    g = 204;
    b= 0;
    direction = -1;

    SDL_Surface *rectangle = NULL;
    rectangle = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position.x = 0; //structure pour placer le point au centre
    position.y = 0;

    SDL_Surface *rectangle1 = NULL;
    rectangle1 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position1.x = position.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position1.y = 0;

    SDL_Surface *rectangle2 = NULL;
    rectangle2 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position2.x = position1.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position2.y = 0;

    SDL_Surface *rectangle3 = NULL;
    rectangle3 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position3.x = position2.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position3.y = 0;

    SDL_Surface *rectangle4 = NULL;
    rectangle4 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position4.x = position3.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position4.y = 0;

    SDL_Surface *rectangle5 = NULL;
    rectangle5 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position5.x = position4.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position5.y = 0;

    SDL_Surface *rectangle6 = NULL;
    rectangle6 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position6.x = position5.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position6.y = 0;

    SDL_Surface *rectangle7 = NULL;
    rectangle7 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position7.x = position6.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position7.y = 0;

    SDL_Surface *rectangle8 = NULL;
    rectangle8 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position8.x = position7.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position8.y = 0;

    SDL_Surface *rectangle9 = NULL;
    rectangle9 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

    position9.x = position8.x + screen->w/nb_ligne; //structure pour placer le point au centre
    position9.y = 0;

    SDL_Event event;
    while(sysMgr.running) // boucle qui travaille tant qu'on appuye pas sur la croix pour quitter
    {
    sysMgr.inputManager();
        sysMgr.renderingManager();
    SDL_FillRect(rectangle, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle1, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle2, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle3, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle4, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle5, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle6, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle7, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_FillRect(rectangle8, NULL, SDL_MapRGB(screen->format, 255, 0, 255));
    SDL_BlitSurface(rectangle, NULL, screen, &position); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle1, NULL, screen, &position1); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle2, NULL, screen, &position2); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle3, NULL, screen, &position3); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle4, NULL, screen, &position4); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle5, NULL, screen, &position5); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle6, NULL, screen, &position6); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle7, NULL, screen, &position7); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle8, NULL, screen, &position8); // Collage de la surface sur l'écran

    SDL_Flip(screen); // Mise à jour de l'écran
    //SDL_Delay( 10 );
    SDL_FillRect(rectangle, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle1, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle2, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle3, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle4, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle5, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle6, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle7, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
    SDL_FillRect(rectangle8, NULL, SDL_MapRGB(screen->format, 0, 0, 0));

    SDL_BlitSurface(rectangle, NULL, screen, &position); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle1, NULL, screen, &position1); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle2, NULL, screen, &position2); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle3, NULL, screen, &position3); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle4, NULL, screen, &position4); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle5, NULL, screen, &position5); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle6, NULL, screen, &position6); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle7, NULL, screen, &position7); // Collage de la surface sur l'écran
    SDL_BlitSurface(rectangle8, NULL, screen, &position8); // Collage de la surface sur l'écran
    if(direction == 1)
    {
        position.x = (position.x +direction*pas)%screen->w;
        position1.x = (position.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position2.x = (position1.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position3.x = (position2.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position4.x = (position3.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position5.x = (position4.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position6.x = (position5.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position7.x = (position6.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position8.x = (position7.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre
        position9.x = (position8.x + direction*screen->w/nb_ligne)%screen->w; //structure pour placer le point au centre

    }
    else
    {
        position.x = (position.x +direction*pas);
        if(position.x <=0)
            position.x = screen->w;
        position1.x = (position1.x + direction*pas); //structure pour placer le point au centre
        if(position1.x <=0)
            position1.x = screen->w;
        position2.x = (position2.x + direction*pas); //structure pour placer le point au centre
        if(position2.x <=0)
            position2.x = screen->w;
        position3.x = (position3.x + direction*pas); //structure pour placer le point au centre
        if(position3.x <=0)
            position3.x = screen->w;
        position4.x = (position4.x + direction*pas); //structure pour placer le point au centre
        if(position4.x <=0)
            position4.x = screen->w;
        position5.x = (position5.x + direction*pas); //structure pour placer le point au centre
        if(position5.x <=0)
            position5.x = screen->w;
        position6.x = (position6.x + direction*pas); //structure pour placer le point au centre
        if(position6.x <=0)
            position6.x = screen->w;
        position7.x = (position7.x + direction*pas); //structure pour placer le point au centre
        if(position7.x <=0)
            position7.x = screen->w;
        position8.x = (position8.x + direction*pas); //structure pour placer le point au centre
        if(position8.x <=0)
            position8.x = screen->w;
        position9.x = (position9.x + direction*pas); //structure pour placer le point au centre

    }

while( SDL_PollEvent( &event ) ){
        switch( event.type ){
            /* Look for a keypress */
            case SDL_KEYDOWN:
                /* Check the SDLKey values and move change the coords */
                switch( event.key.keysym.sym ){

                    case SDLK_ESCAPE:
                        exit(0);
                        break;
                    case SDLK_UP:
                        direction = - direction;
                        break;
                    case SDLK_LEFT:
                        vitesse = (vitesse*2)%10+1;
                        break;
                    case SDLK_RIGHT:
                        pas = (pas+1)%5;
                        if(pas ==0)
                            pas = 1;
                        break;
                    case SDLK_DOWN:
                        r=(r+2)%200;
                        g=(g+2)%200;
                        b=(b+2)%200;
                        rectangle = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle1 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle2 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle3 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle4 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle5 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle6 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle7 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle8 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur
                        rectangle9 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        break;
                    case SDLK_SPACE:
                        nb_ligne=((nb_ligne-4+1)%5)+4;
                        rectangle = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position.x = 0; //structure pour placer le point au centre
                        position.y = 0;
                        rectangle1 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position1.x = position.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position1.y = 0;
                        rectangle2 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position2.x = position1.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position2.y = 0;
                        rectangle3 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position3.x = position2.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position3.y = 0;
                        rectangle4 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position4.x = position3.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position4.y = 0;
                        rectangle5 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position5.x = position4.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position5.y = 0;
                        rectangle6 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position6.x = position5.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position6.y = 0;
                        rectangle7 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position7.x = position6.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position7.y = 0;
                        rectangle8 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position8.x = position7.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position8.y = 0;
                        rectangle9 = SDL_CreateRGBSurface(SDL_HWSURFACE, screen->w/(nb_ligne*2), screen->h, 16, r, g, b, 0); // taille et couleur

                        position9.x = position8.x + screen->w/nb_ligne; //structure pour placer le point au centre
                        position9.y = 0;
                        break;


                    default:
                        break;
                }
            }
        }

    SDL_Delay( vitesse);


            }



  return EXIT_SUCCESS;

}

