#ifndef _EXTERNS_H
#define _EXTERNS_H

#include "Config.h"
#include "Map.h"
#include "Player.h"
#include "Camera.h"
#include "Towers.h"
#include "Bullets.h"
#include "Keys.h"
#include "Rainbow.h"
#include "Toilet.h"
#include "Radar.h"
#include "SkyBox.h"
#include "Sound.h"
#include "Vertex.h"
#include "Plane.h"
#include "Frustum.h"
#include "externs.h"
#include "Lighting.h"
#include "Profiling.h"
#include "Lifes.h"
#include "Trees.h"

extern Lifes *g_lifes;

extern Config conf;
extern Lighting* g_lighting;
extern Map* g_map;
extern Player* g_player;
extern Camera* g_camera;
extern Towers* g_towers;
extern Bullets* g_bullets;
extern Keys* g_keys;
extern Rainbow* g_rainbow;
extern Toilet* g_toilet;
extern Trees* g_trees;

extern Radar* g_radar;
extern Profiling *g_profiling;

extern int g_win_w, g_win_h, g_win_half_w, g_win_half_h;

extern float g_dist_factor;

extern int g_anims_interval;
extern int g_update_interval;

extern SkyBox* g_skybox;

extern Frustum *g_frustum;

#endif
