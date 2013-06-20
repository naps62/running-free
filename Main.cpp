
#include <GL/glut.h>

#include "Config.h"
#include "GLManager.h"
#include "Player.h"
#include "Map.h"
#include "Camera.h"
#include "Tower.h"
#include "Keys.h"
#include "Towers.h"
#include "Bullets.h"
#include "Rainbow.h"
#include "Toilet.h"
#include "Radar.h"
#include "Sound.h"
#include "SkyBox.h"
#include "Frustum.h"
#include "Lighting.h"
#include "Profiling.h"
#include "Lifes.h"
#include "Trees.h"

//configuracoes principais
Config conf("config.ini");

Lighting *g_lighting;
//instancia do jogador principal
Player* g_player;
Towers* g_towers;
Bullets* g_bullets;
Keys* g_keys;
//instancia do mapa
Map* g_map;
Trees* g_trees;
//instancia da camera
Camera* g_camera;
Rainbow* g_rainbow;
Toilet* g_toilet;

SkyBox *g_skybox;

Radar *g_radar;

Frustum *g_frustum;
Profiling *g_profiling;

Lifes *g_lifes;

/* armazenam o tamanho da janela */
int g_win_w, g_win_h, g_win_half_w, g_win_half_h;

/* normalizacao das distancias */
float g_dist_factor;

/* animacoes independentes da framerate */
int g_update_interval;
int g_anims_interval;

int main(int argc, char **argv) {
	GLManager::init(&argc, argv);
	glutMainLoop();
	return 0;
}
