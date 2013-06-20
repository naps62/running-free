/**
 * Define uma class que reperesenta um player model.
 */
#ifndef _character_h
#define _character_h

#include "Model_MD2.h"
#include "Vertex.h"
#include "Frame.h"

typedef enum enum_state {
	GAME_ON,
	GAME_OVER,
	GAME_WIN
} GameState;


#include "InputManager.h"

class Player : public Model_MD2 {
public:
	Frame *anim;
	float ang_x, ang_y;
	float speed_front, speed_back, speed_side;
	float speed_rotate_x, speed_rotate_y;
	float wall_dist;
	bool isJumping;
	int jump_time;
	int jump_max;
	bool canJump;
	int jump_cooldown;
	int tower_colision_dist;
	int tree_colision_dist;

	GameState state;

	Player(const std::string &path);

	void move(Vertex *new_coords);
	bool isMoving();
	void update();
	void render();

	float jumpOff(int off);

	static void inc_frame(int val);

	void calcColisions();
};

#endif
