#ifndef NINECRAFT_MINECRAFT_H
#define NINECRAFT_MINECRAFT_H

#include <stdint.h>
#include <stdbool.h>
#include <ninecraft/android/android_string.h>

#define MINECRAFT_COMMANDSERVER_OFFSET_0_6_1 0xe5c
#define MINECRAFT_COMMANDSERVER_OFFSET_0_7_0 0xebc
#define MINECRAFT_COMMANDSERVER_OFFSET_0_7_2 0xec8
#define MINECRAFT_OPTIONS_OFFSET 0x28
#define MINECRAFT_GUI_OFFSET 0x2e4
#define MINECRAFT_PLAYER_OFFSET 0x2d8
#define GUI_MINECRAFT_OFFSET 0xa08
#define PLAYER_INVENTORY_OFFSET 0xc08
#define INVENTORY_SELECTED_SLOT_OFFSET 0x28
#define FILLINGCONTAINER_LINKED_SLOTS_OFFSET 0x0c
#define FILLINGCONTAINER_LINKED_SLOTS_COUNT_OFFSET 0x14

#ifdef __i386__
#define NINECRAFTAPP_SIZE_0_8_1 0xd64
#define NINECRAFTAPP_SIZE_0_8_0 0xd54
#define NINECRAFTAPP_SIZE_0_7_6 0xd20
#define NINECRAFTAPP_SIZE_0_7_5 0xd20
#define NINECRAFTAPP_SIZE_0_7_4 0xd20
#define NINECRAFTAPP_SIZE_0_7_3 0xd14
#define NINECRAFTAPP_SIZE_0_7_2 0xeec
#define NINECRAFTAPP_SIZE_0_7_1 0xee0
#define NINECRAFTAPP_SIZE_0_7_0 0xee0
#else
#ifdef __thumb2__
#define NINECRAFTAPP_SIZE_0_8_1 0xd70
#define NINECRAFTAPP_SIZE_0_8_0 0xD60
#define NINECRAFTAPP_SIZE_0_7_6 0xd30
#define NINECRAFTAPP_SIZE_0_7_5 0xd30
#define NINECRAFTAPP_SIZE_0_7_4 0xd30
#define NINECRAFTAPP_SIZE_0_7_3 0xd20
#define NINECRAFTAPP_SIZE_0_7_2 0xef8
#define NINECRAFTAPP_SIZE_0_7_1 0xee8
#define NINECRAFTAPP_SIZE_0_7_0 0xee8
#endif
#endif
#define NINECRAFTAPP_SIZE_0_6_1 0xe6c
#define NINECRAFTAPP_SIZE_0_6_0 0xe6c
#define NINECRAFTAPP_SIZE_0_5_0 0xe68
#define NINECRAFTAPP_SIZE_0_5_0_J 0xcb0
#define NINECRAFTAPP_SIZE_0_4_0 0xe64
#define NINECRAFTAPP_SIZE_0_4_0_J 0xcac
#define NINECRAFTAPP_SIZE_0_3_3 0xe64
#define NINECRAFTAPP_SIZE_0_3_3_J 0xcac
#define NINECRAFTAPP_SIZE_0_3_2 0xe44
#define NINECRAFTAPP_SIZE_0_3_2_J 0xca0
#define NINECRAFTAPP_SIZE_0_3_0 0xe44
#define NINECRAFTAPP_SIZE_0_3_0_J 0xca0
#define NINECRAFTAPP_SIZE_0_2_2 0xe20
#define NINECRAFTAPP_SIZE_0_2_1 0xc90
#define NINECRAFTAPP_SIZE_0_2_1_J 0xc90
#define NINECRAFTAPP_SIZE_0_2_0 0xc5c
#define NINECRAFTAPP_SIZE_0_2_0_J 0xc5c
#define NINECRAFTAPP_SIZE_0_1_3 0xdf4
#define NINECRAFTAPP_SIZE_0_1_3_J 0xdf4
#define NINECRAFTAPP_SIZE_0_1_2 0xde4
#define NINECRAFTAPP_SIZE_0_1_2_J 0xde4
#define NINECRAFTAPP_SIZE_0_1_1 0xde4
#define NINECRAFTAPP_SIZE_0_1_1_J 0xde4
#define NINECRAFTAPP_SIZE_0_1_0_TOUCH 0xddc
#define NINECRAFTAPP_SIZE_0_1_0 0xdc8

#ifdef __i386__
#define MINECRAFT_ISGRABBED_OFFSET_0_8_1 0xc78
#define MINECRAFT_ISGRABBED_OFFSET_0_8_0 0xc68
#define MINECRAFT_ISGRABBED_OFFSET_0_7_6 0xc50
#define MINECRAFT_ISGRABBED_OFFSET_0_7_5 0xc50
#define MINECRAFT_ISGRABBED_OFFSET_0_7_4 0xc50
#define MINECRAFT_ISGRABBED_OFFSET_0_7_3 0xc50
#define MINECRAFT_ISGRABBED_OFFSET_0_7_2 0xdec
#define MINECRAFT_ISGRABBED_OFFSET_0_7_1 0xde0
#define MINECRAFT_ISGRABBED_OFFSET_0_7_0 0xde0
#else
#ifdef __thumb2__
#define MINECRAFT_ISGRABBED_OFFSET_0_8_1 0xc80
#define MINECRAFT_ISGRABBED_OFFSET_0_8_0 0xc70
#define MINECRAFT_ISGRABBED_OFFSET_0_7_6 0xc58
#define MINECRAFT_ISGRABBED_OFFSET_0_7_5 0xc58
#define MINECRAFT_ISGRABBED_OFFSET_0_7_4 0xc58
#define MINECRAFT_ISGRABBED_OFFSET_0_7_3 0xc58
#define MINECRAFT_ISGRABBED_OFFSET_0_7_2 0xdf4
#define MINECRAFT_ISGRABBED_OFFSET_0_7_1 0xde4
#define MINECRAFT_ISGRABBED_OFFSET_0_7_0 0xde4
#endif
#endif
#define MINECRAFT_ISGRABBED_OFFSET_0_6_1 0xd98
#define MINECRAFT_ISGRABBED_OFFSET_0_6_0 0xd98
#define MINECRAFT_ISGRABBED_OFFSET_0_5_0 0xd98
#define MINECRAFT_ISGRABBED_OFFSET_0_5_0_J 0xc08
#define MINECRAFT_ISGRABBED_OFFSET_0_4_0 0xd94
#define MINECRAFT_ISGRABBED_OFFSET_0_4_0_J 0xc04
#define MINECRAFT_ISGRABBED_OFFSET_0_3_3 0xd90
#define MINECRAFT_ISGRABBED_OFFSET_0_3_3_J 0xc00
#define MINECRAFT_ISGRABBED_OFFSET_0_3_2 0xd88
#define MINECRAFT_ISGRABBED_OFFSET_0_3_2_J 0xbf8
#define MINECRAFT_ISGRABBED_OFFSET_0_3_0 0xd88
#define MINECRAFT_ISGRABBED_OFFSET_0_3_0_J 0xbf8
#define MINECRAFT_ISGRABBED_OFFSET_0_2_2 0xd64
#define MINECRAFT_ISGRABBED_OFFSET_0_2_1 0xbe8
#define MINECRAFT_ISGRABBED_OFFSET_0_2_1_J 0xbe8
#define MINECRAFT_ISGRABBED_OFFSET_0_2_0 0xbb4
#define MINECRAFT_ISGRABBED_OFFSET_0_2_0_J 0xbb4
#define MINECRAFT_ISGRABBED_OFFSET_0_1_3 0xd40
#define MINECRAFT_ISGRABBED_OFFSET_0_1_3_J 0xd40
#define MINECRAFT_ISGRABBED_OFFSET_0_1_2 0xd40
#define MINECRAFT_ISGRABBED_OFFSET_0_1_2_J 0xd40
#define MINECRAFT_ISGRABBED_OFFSET_0_1_1 0xd40
#define MINECRAFT_ISGRABBED_OFFSET_0_1_1_J 0xd40
#define MINECRAFT_ISGRABBED_OFFSET_0_1_0_TOUCH 0xd38
#define MINECRAFT_ISGRABBED_OFFSET_0_1_0 0xd28

typedef void (*minecraft_level_generated_t)(void *minecraft);

extern minecraft_level_generated_t minecraft_level_generated;

typedef void (*minecraft_tick_t)(void *minecraft, uint32_t param_1, uint32_t param_2);

extern minecraft_tick_t minecraft_tick;

typedef void (*command_server_deconstruct_t)(void *command_server);

extern command_server_deconstruct_t command_server_deconstruct;

typedef void (*command_server_construct_t)(void *command_server, void *minecraft);

extern command_server_construct_t command_server_construct;

typedef void (*command_server_init_t)(void *command_server, uint16_t port);

extern command_server_init_t command_server_init;

typedef void (*start_menu_screen_construct_t)(void *start_menu_screen);

extern start_menu_screen_construct_t start_menu_screen_construct;

typedef void (*player_renderer_render_name_t)(void *player_renderer, void *mob, float x, float y, float z);

extern player_renderer_render_name_t player_renderer_render_name;

typedef void (*textures_load_and_bind_texture_t)(void *textures, android_string_t *path);

extern textures_load_and_bind_texture_t textures_load_and_bind_texture;

typedef void (*gui_component_blit_t)(void *screen, int32_t x_dest, int32_t y_dest, int32_t x_src, int32_t y_src, int32_t width_dest, int32_t height_dest, int32_t width_src, int32_t height_src);

extern gui_component_blit_t gui_component_blit;

typedef void (*screen_render_dirt_background_t)(void *screen, int32_t param_1);

extern screen_render_dirt_background_t screen_render_dirt_background;

typedef void (*ninecraft_app_construct_t)(void *ninecraft_app);

extern ninecraft_app_construct_t ninecraft_app_construct;

typedef void (*ninecraft_app_init_t)(void *ninecraft_app);

extern ninecraft_app_init_t ninecraft_app_init;

typedef void (*minecraft_set_size_t)(void *minecraft, uint32_t width, uint32_t height);

extern minecraft_set_size_t minecraft_set_size;

typedef void (*ninecraft_app_update_t)(void *ninecraft_app);

extern ninecraft_app_update_t ninecraft_app_update;

typedef void (*ninecraft_app_handle_back_t)(void *ninecraft_app, bool keep_screen);

extern ninecraft_app_handle_back_t ninecraft_app_handle_back;

extern void minecraft_setup_hooks(void *handle);

#endif