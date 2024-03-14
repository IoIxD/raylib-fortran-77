#include <utils.h>
#include <raylib.h>
void init_window_(int *width, int *height, const char *title)
{
	return InitWindow(*width, *height, title);
}
void close_window_()
{
	return CloseWindow();
}
_Bool window_should_close_()
{
	return WindowShouldClose();
}
_Bool is_window_ready_()
{
	return IsWindowReady();
}
_Bool is_window_fullscreen_()
{
	return IsWindowFullscreen();
}
_Bool is_window_hidden_()
{
	return IsWindowHidden();
}
_Bool is_window_minimized_()
{
	return IsWindowMinimized();
}
_Bool is_window_maximized_()
{
	return IsWindowMaximized();
}
_Bool is_window_focused_()
{
	return IsWindowFocused();
}
_Bool is_window_resized_()
{
	return IsWindowResized();
}
_Bool is_window_state_(unsigned int *flag)
{
	return IsWindowState(*flag);
}
void set_window_state_(unsigned int *flags)
{
	return SetWindowState(*flags);
}
void clear_window_state_(unsigned int *flags)
{
	return ClearWindowState(*flags);
}
void toggle_fullscreen_()
{
	return ToggleFullscreen();
}
void toggle_borderless_windowed_()
{
	return ToggleBorderlessWindowed();
}
void maximize_window_()
{
	return MaximizeWindow();
}
void minimize_window_()
{
	return MinimizeWindow();
}
void restore_window_()
{
	return RestoreWindow();
}
void set_window_icon_(Image *image)
{
	return SetWindowIcon(*image);
}
void set_window_icons_(Image *images, int *count)
{
	return SetWindowIcons(images, *count);
}
void set_window_title_(const char *title)
{
	return SetWindowTitle(title);
}
void set_window_position_(int *x, int *y)
{
	return SetWindowPosition(*x, *y);
}
void set_window_monitor_(int *monitor)
{
	return SetWindowMonitor(*monitor);
}
void set_window_min_size_(int *width, int *height)
{
	return SetWindowMinSize(*width, *height);
}
void set_window_max_size_(int *width, int *height)
{
	return SetWindowMaxSize(*width, *height);
}
void set_window_size_(int *width, int *height)
{
	return SetWindowSize(*width, *height);
}
void set_window_opacity_(float *opacity)
{
	return SetWindowOpacity(*opacity);
}
void set_window_focused_()
{
	return SetWindowFocused();
}
void *_get_window_handle_()
{
	return GetWindowHandle();
}
int get_screen_width_()
{
	return GetScreenWidth();
}
int get_screen_height_()
{
	return GetScreenHeight();
}
int get_render_width_()
{
	return GetRenderWidth();
}
int get_render_height_()
{
	return GetRenderHeight();
}
int get_monitor_count_()
{
	return GetMonitorCount();
}
int get_current_monitor_()
{
	return GetCurrentMonitor();
}
Vector2 get_monitor_position_(int *monitor)
{
	return GetMonitorPosition(*monitor);
}
int get_monitor_width_(int *monitor)
{
	return GetMonitorWidth(*monitor);
}
int get_monitor_height_(int *monitor)
{
	return GetMonitorHeight(*monitor);
}
int get_monitor_physical_width_(int *monitor)
{
	return GetMonitorPhysicalWidth(*monitor);
}
int get_monitor_physical_height_(int *monitor)
{
	return GetMonitorPhysicalHeight(*monitor);
}
int get_monitor_refresh_rate_(int *monitor)
{
	return GetMonitorRefreshRate(*monitor);
}
Vector2 get_window_position_()
{
	return GetWindowPosition();
}
Vector2 get_window_scale_d_p_i_()
{
	return GetWindowScaleDPI();
}
const char *_get_monitor_name_(int *monitor)
{
	return GetMonitorName(*monitor);
}
void set_clipboard_text_(const char *text)
{
	return SetClipboardText(text);
}
const char *_get_clipboard_text_()
{
	return GetClipboardText();
}
void enable_event_waiting_()
{
	return EnableEventWaiting();
}
void disable_event_waiting_()
{
	return DisableEventWaiting();
}
void show_cursor_()
{
	return ShowCursor();
}
void hide_cursor_()
{
	return HideCursor();
}
_Bool is_cursor_hidden_()
{
	return IsCursorHidden();
}
void enable_cursor_()
{
	return EnableCursor();
}
void disable_cursor_()
{
	return DisableCursor();
}
_Bool is_cursor_on_screen_()
{
	return IsCursorOnScreen();
}
void clear_background_(Color *color)
{
	return ClearBackground(*color);
}
void begin_drawing_()
{
	return BeginDrawing();
}
void end_drawing_()
{
	return EndDrawing();
}
void begin_mode2_d_(Camera2D *camera)
{
	return BeginMode2D(*camera);
}
void end_mode2_d_()
{
	return EndMode2D();
}
void begin_mode3_d_(Camera3D *camera)
{
	return BeginMode3D(*camera);
}
void end_mode3_d_()
{
	return EndMode3D();
}
void begin_texture_mode_(RenderTexture2D *target)
{
	return BeginTextureMode(*target);
}
void end_texture_mode_()
{
	return EndTextureMode();
}
void begin_shader_mode_(Shader *shader)
{
	return BeginShaderMode(*shader);
}
void end_shader_mode_()
{
	return EndShaderMode();
}
void begin_blend_mode_(int *mode)
{
	return BeginBlendMode(*mode);
}
void end_blend_mode_()
{
	return EndBlendMode();
}
void begin_scissor_mode_(int *x, int *y, int *width, int *height)
{
	return BeginScissorMode(*x, *y, *width, *height);
}
void end_scissor_mode_()
{
	return EndScissorMode();
}
void begin_vr_stereo_mode_(VrStereoConfig *config)
{
	return BeginVrStereoMode(*config);
}
void end_vr_stereo_mode_()
{
	return EndVrStereoMode();
}
VrStereoConfig load_vr_stereo_config_(VrDeviceInfo *device)
{
	return LoadVrStereoConfig(*device);
}
void unload_vr_stereo_config_(VrStereoConfig *config)
{
	return UnloadVrStereoConfig(*config);
}
Shader load_shader_(const char *vsFileName, const char *fsFileName)
{
	return LoadShader(vsFileName, fsFileName);
}
Shader load_shader_from_memory_(const char *vsCode, const char *fsCode)
{
	return LoadShaderFromMemory(vsCode, fsCode);
}
_Bool is_shader_ready_(Shader *shader)
{
	return IsShaderReady(*shader);
}
int get_shader_location_(Shader *shader, const char *uniformName)
{
	return GetShaderLocation(*shader, uniformName);
}
int get_shader_location_attrib_(Shader *shader, const char *attribName)
{
	return GetShaderLocationAttrib(*shader, attribName);
}
void set_shader_value_(Shader *shader, int *locIndex, const void *value, int *uniformType)
{
	return SetShaderValue(*shader, *locIndex, value, *uniformType);
}
void set_shader_value_v_(Shader *shader, int *locIndex, const void *value, int *uniformType, int *count)
{
	return SetShaderValueV(*shader, *locIndex, value, *uniformType, *count);
}
void set_shader_value_matrix_(Shader *shader, int *locIndex, Matrix *mat)
{
	return SetShaderValueMatrix(*shader, *locIndex, *mat);
}
void set_shader_value_texture_(Shader *shader, int *locIndex, Texture2D *texture)
{
	return SetShaderValueTexture(*shader, *locIndex, *texture);
}
void unload_shader_(Shader *shader)
{
	return UnloadShader(*shader);
}
Ray get_mouse_ray_(Vector2 *position, Camera *camera)
{
	return GetMouseRay(*position, *camera);
}
Vector2 get_world_to_screen_(Vector3 *position, Camera *camera)
{
	return GetWorldToScreen(*position, *camera);
}
Vector2 get_world_to_screen_ex_(Vector3 *position, Camera *camera, int *width, int *height)
{
	return GetWorldToScreenEx(*position, *camera, *width, *height);
}
Vector2 get_world_to_screen2_d_(Vector2 *position, Camera2D *camera)
{
	return GetWorldToScreen2D(*position, *camera);
}
Vector2 get_screen_to_world2_d_(Vector2 *position, Camera2D *camera)
{
	return GetScreenToWorld2D(*position, *camera);
}
Matrix get_camera_matrix_(Camera *camera)
{
	return GetCameraMatrix(*camera);
}
Matrix get_camera_matrix2_d_(Camera2D *camera)
{
	return GetCameraMatrix2D(*camera);
}
void set_target_f_p_s_(int *fps)
{
	return SetTargetFPS(*fps);
}
float get_frame_time_()
{
	return GetFrameTime();
}
double get_time_()
{
	return GetTime();
}
int get_f_p_s_()
{
	return GetFPS();
}
void swap_screen_buffer_()
{
	return SwapScreenBuffer();
}
void poll_input_events_()
{
	return PollInputEvents();
}
void wait_time_(double *seconds)
{
	return WaitTime(*seconds);
}
void set_random_seed_(unsigned int *seed)
{
	return SetRandomSeed(*seed);
}
int get_random_value_(int *min, int *max)
{
	return GetRandomValue(*min, *max);
}
int *_load_random_sequence_(unsigned int *count, int *min, int *max)
{
	return LoadRandomSequence(*count, *min, *max);
}
void unload_random_sequence_(int *sequence)
{
	return UnloadRandomSequence(sequence);
}
void take_screenshot_(const char *fileName)
{
	return TakeScreenshot(fileName);
}
void set_config_flags_(unsigned int *flags)
{
	return SetConfigFlags(*flags);
}
void open_u_r_l_(const char *url)
{
	return OpenURL(url);
}
void trace_log_(int *logLevel, const char *text, ...)
{
	return TraceLog(*logLevel, text);
}
void set_trace_log_level_(int *logLevel)
{
	return SetTraceLogLevel(*logLevel);
}
void *_mem_alloc_(unsigned int *size)
{
	return MemAlloc(*size);
}
void *_mem_realloc_(void *ptr, unsigned int *size)
{
	return MemRealloc(ptr, *size);
}
void mem_free_(void *ptr)
{
	return MemFree(ptr);
}
void set_trace_log_callback_(TraceLogCallback *callback)
{
	return SetTraceLogCallback(*callback);
}
void set_load_file_data_callback_(LoadFileDataCallback *callback)
{
	return SetLoadFileDataCallback(*callback);
}
void set_save_file_data_callback_(SaveFileDataCallback *callback)
{
	return SetSaveFileDataCallback(*callback);
}
void set_load_file_text_callback_(LoadFileTextCallback *callback)
{
	return SetLoadFileTextCallback(*callback);
}
void set_save_file_text_callback_(SaveFileTextCallback *callback)
{
	return SetSaveFileTextCallback(*callback);
}
unsigned char *_load_file_data_(const char *fileName, int *dataSize)
{
	return LoadFileData(fileName, dataSize);
}
void unload_file_data_(unsigned char *data)
{
	return UnloadFileData(data);
}
_Bool save_file_data_(const char *fileName, void *data, int *dataSize)
{
	return SaveFileData(fileName, data, *dataSize);
}
_Bool export_data_as_code_(const unsigned char *data, int *dataSize, const char *fileName)
{
	return ExportDataAsCode(data, *dataSize, fileName);
}
char *_load_file_text_(const char *fileName)
{
	return LoadFileText(fileName);
}
void unload_file_text_(char *text)
{
	return UnloadFileText(text);
}
_Bool save_file_text_(const char *fileName, char *text)
{
	return SaveFileText(fileName, text);
}
_Bool file_exists_(const char *fileName)
{
	return FileExists(fileName);
}
_Bool directory_exists_(const char *dirPath)
{
	return DirectoryExists(dirPath);
}
_Bool is_file_extension_(const char *fileName, const char *ext)
{
	return IsFileExtension(fileName, ext);
}
int get_file_length_(const char *fileName)
{
	return GetFileLength(fileName);
}
const char *_get_file_extension_(const char *fileName)
{
	return GetFileExtension(fileName);
}
const char *_get_file_name_(const char *filePath)
{
	return GetFileName(filePath);
}
const char *_get_file_name_without_ext_(const char *filePath)
{
	return GetFileNameWithoutExt(filePath);
}
const char *_get_directory_path_(const char *filePath)
{
	return GetDirectoryPath(filePath);
}
const char *_get_prev_directory_path_(const char *dirPath)
{
	return GetPrevDirectoryPath(dirPath);
}
const char *_get_working_directory_()
{
	return GetWorkingDirectory();
}
const char *_get_application_directory_()
{
	return GetApplicationDirectory();
}
_Bool change_directory_(const char *dir)
{
	return ChangeDirectory(dir);
}
_Bool is_path_file_(const char *path)
{
	return IsPathFile(path);
}
FilePathList load_directory_files_(const char *dirPath)
{
	return LoadDirectoryFiles(dirPath);
}
FilePathList load_directory_files_ex_(const char *basePath, const char *filter, _Bool *scanSubdirs)
{
	return LoadDirectoryFilesEx(basePath, filter, *scanSubdirs);
}
void unload_directory_files_(FilePathList *files)
{
	return UnloadDirectoryFiles(*files);
}
_Bool is_file_dropped_()
{
	return IsFileDropped();
}
FilePathList load_dropped_files_()
{
	return LoadDroppedFiles();
}
void unload_dropped_files_(FilePathList *files)
{
	return UnloadDroppedFiles(*files);
}
long get_file_mod_time_(const char *fileName)
{
	return GetFileModTime(fileName);
}
unsigned char *_compress_data_(const unsigned char *data, int *dataSize, int *compDataSize)
{
	return CompressData(data, *dataSize, compDataSize);
}
unsigned char *_decompress_data_(const unsigned char *compData, int *compDataSize, int *dataSize)
{
	return DecompressData(compData, *compDataSize, dataSize);
}
char *_encode_data_base64_(const unsigned char *data, int *dataSize, int *outputSize)
{
	return EncodeDataBase64(data, *dataSize, outputSize);
}
unsigned char *_decode_data_base64_(const unsigned char *data, int *outputSize)
{
	return DecodeDataBase64(data, outputSize);
}
AutomationEventList load_automation_event_list_(const char *fileName)
{
	return LoadAutomationEventList(fileName);
}
void unload_automation_event_list_(AutomationEventList *list)
{
	return UnloadAutomationEventList(list);
}
_Bool export_automation_event_list_(AutomationEventList *list, const char *fileName)
{
	return ExportAutomationEventList(*list, fileName);
}
void set_automation_event_list_(AutomationEventList *list)
{
	return SetAutomationEventList(list);
}
void set_automation_event_base_frame_(int *frame)
{
	return SetAutomationEventBaseFrame(*frame);
}
void start_automation_event_recording_()
{
	return StartAutomationEventRecording();
}
void stop_automation_event_recording_()
{
	return StopAutomationEventRecording();
}
void play_automation_event_(AutomationEvent *event)
{
	return PlayAutomationEvent(*event);
}
_Bool is_key_pressed_(int *key)
{
	return IsKeyPressed(*key);
}
_Bool is_key_pressed_repeat_(int *key)
{
	return IsKeyPressedRepeat(*key);
}
_Bool is_key_down_(int *key)
{
	return IsKeyDown(*key);
}
_Bool is_key_released_(int *key)
{
	return IsKeyReleased(*key);
}
_Bool is_key_up_(int *key)
{
	return IsKeyUp(*key);
}
int get_key_pressed_()
{
	return GetKeyPressed();
}
int get_char_pressed_()
{
	return GetCharPressed();
}
void set_exit_key_(int *key)
{
	return SetExitKey(*key);
}
_Bool is_gamepad_available_(int *gamepad)
{
	return IsGamepadAvailable(*gamepad);
}
const char *_get_gamepad_name_(int *gamepad)
{
	return GetGamepadName(*gamepad);
}
_Bool is_gamepad_button_pressed_(int *gamepad, int *button)
{
	return IsGamepadButtonPressed(*gamepad, *button);
}
_Bool is_gamepad_button_down_(int *gamepad, int *button)
{
	return IsGamepadButtonDown(*gamepad, *button);
}
_Bool is_gamepad_button_released_(int *gamepad, int *button)
{
	return IsGamepadButtonReleased(*gamepad, *button);
}
_Bool is_gamepad_button_up_(int *gamepad, int *button)
{
	return IsGamepadButtonUp(*gamepad, *button);
}
int get_gamepad_button_pressed_()
{
	return GetGamepadButtonPressed();
}
int get_gamepad_axis_count_(int *gamepad)
{
	return GetGamepadAxisCount(*gamepad);
}
float get_gamepad_axis_movement_(int *gamepad, int *axis)
{
	return GetGamepadAxisMovement(*gamepad, *axis);
}
int set_gamepad_mappings_(const char *mappings)
{
	return SetGamepadMappings(mappings);
}
_Bool is_mouse_button_pressed_(int *button)
{
	return IsMouseButtonPressed(*button);
}
_Bool is_mouse_button_down_(int *button)
{
	return IsMouseButtonDown(*button);
}
_Bool is_mouse_button_released_(int *button)
{
	return IsMouseButtonReleased(*button);
}
_Bool is_mouse_button_up_(int *button)
{
	return IsMouseButtonUp(*button);
}
int get_mouse_x_()
{
	return GetMouseX();
}
int get_mouse_y_()
{
	return GetMouseY();
}
Vector2 get_mouse_position_()
{
	return GetMousePosition();
}
Vector2 get_mouse_delta_()
{
	return GetMouseDelta();
}
void set_mouse_position_(int *x, int *y)
{
	return SetMousePosition(*x, *y);
}
void set_mouse_offset_(int *offsetX, int *offsetY)
{
	return SetMouseOffset(*offsetX, *offsetY);
}
void set_mouse_scale_(float *scaleX, float *scaleY)
{
	return SetMouseScale(*scaleX, *scaleY);
}
float get_mouse_wheel_move_()
{
	return GetMouseWheelMove();
}
Vector2 get_mouse_wheel_move_v_()
{
	return GetMouseWheelMoveV();
}
void set_mouse_cursor_(int *cursor)
{
	return SetMouseCursor(*cursor);
}
int get_touch_x_()
{
	return GetTouchX();
}
int get_touch_y_()
{
	return GetTouchY();
}
Vector2 get_touch_position_(int *index)
{
	return GetTouchPosition(*index);
}
int get_touch_point_id_(int *index)
{
	return GetTouchPointId(*index);
}
int get_touch_point_count_()
{
	return GetTouchPointCount();
}
void set_gestures_enabled_(unsigned int *flags)
{
	return SetGesturesEnabled(*flags);
}
_Bool is_gesture_detected_(unsigned int *gesture)
{
	return IsGestureDetected(*gesture);
}
int get_gesture_detected_()
{
	return GetGestureDetected();
}
float get_gesture_hold_duration_()
{
	return GetGestureHoldDuration();
}
Vector2 get_gesture_drag_vector_()
{
	return GetGestureDragVector();
}
float get_gesture_drag_angle_()
{
	return GetGestureDragAngle();
}
Vector2 get_gesture_pinch_vector_()
{
	return GetGesturePinchVector();
}
float get_gesture_pinch_angle_()
{
	return GetGesturePinchAngle();
}
void update_camera_(Camera *camera, int *mode)
{
	return UpdateCamera(camera, *mode);
}
void update_camera_pro_(Camera *camera, Vector3 *movement, Vector3 *rotation, float *zoom)
{
	return UpdateCameraPro(camera, *movement, *rotation, *zoom);
}
void set_shapes_texture_(Texture2D *texture, Rectangle *source)
{
	return SetShapesTexture(*texture, *source);
}
void draw_pixel_(int *posX, int *posY, Color *color)
{
	return DrawPixel(*posX, *posY, *color);
}
void draw_pixel_v_(Vector2 *position, Color *color)
{
	return DrawPixelV(*position, *color);
}
void draw_line_(int *startPosX, int *startPosY, int *endPosX, int *endPosY, Color *color)
{
	return DrawLine(*startPosX, *startPosY, *endPosX, *endPosY, *color);
}
void draw_line_v_(Vector2 *startPos, Vector2 *endPos, Color *color)
{
	return DrawLineV(*startPos, *endPos, *color);
}
void draw_line_ex_(Vector2 *startPos, Vector2 *endPos, float *thick, Color *color)
{
	return DrawLineEx(*startPos, *endPos, *thick, *color);
}
void draw_line_strip_(Vector2 *points, int *pointCount, Color *color)
{
	return DrawLineStrip(points, *pointCount, *color);
}
void draw_line_bezier_(Vector2 *startPos, Vector2 *endPos, float *thick, Color *color)
{
	return DrawLineBezier(*startPos, *endPos, *thick, *color);
}
void draw_circle_(int *centerX, int *centerY, float *radius, Color *color)
{
	return DrawCircle(*centerX, *centerY, *radius, *color);
}
void draw_circle_sector_(Vector2 *center, float *radius, float *startAngle, float *endAngle, int *segments, Color *color)
{
	return DrawCircleSector(*center, *radius, *startAngle, *endAngle, *segments, *color);
}
void draw_circle_sector_lines_(Vector2 *center, float *radius, float *startAngle, float *endAngle, int *segments, Color *color)
{
	return DrawCircleSectorLines(*center, *radius, *startAngle, *endAngle, *segments, *color);
}
void draw_circle_gradient_(int *centerX, int *centerY, float *radius, Color *color1, Color *color2)
{
	return DrawCircleGradient(*centerX, *centerY, *radius, *color1, *color2);
}
void draw_circle_v_(Vector2 *center, float *radius, Color *color)
{
	return DrawCircleV(*center, *radius, *color);
}
void draw_circle_lines_(int *centerX, int *centerY, float *radius, Color *color)
{
	return DrawCircleLines(*centerX, *centerY, *radius, *color);
}
void draw_circle_lines_v_(Vector2 *center, float *radius, Color *color)
{
	return DrawCircleLinesV(*center, *radius, *color);
}
void draw_ellipse_(int *centerX, int *centerY, float *radiusH, float *radiusV, Color *color)
{
	return DrawEllipse(*centerX, *centerY, *radiusH, *radiusV, *color);
}
void draw_ellipse_lines_(int *centerX, int *centerY, float *radiusH, float *radiusV, Color *color)
{
	return DrawEllipseLines(*centerX, *centerY, *radiusH, *radiusV, *color);
}
void draw_ring_(Vector2 *center, float *innerRadius, float *outerRadius, float *startAngle, float *endAngle, int *segments, Color *color)
{
	return DrawRing(*center, *innerRadius, *outerRadius, *startAngle, *endAngle, *segments, *color);
}
void draw_ring_lines_(Vector2 *center, float *innerRadius, float *outerRadius, float *startAngle, float *endAngle, int *segments, Color *color)
{
	return DrawRingLines(*center, *innerRadius, *outerRadius, *startAngle, *endAngle, *segments, *color);
}
void draw_rectangle_(int *posX, int *posY, int *width, int *height, Color *color)
{
	return DrawRectangle(*posX, *posY, *width, *height, *color);
}
void draw_rectangle_v_(Vector2 *position, Vector2 *size, Color *color)
{
	return DrawRectangleV(*position, *size, *color);
}
void draw_rectangle_rec_(Rectangle *rec, Color *color)
{
	return DrawRectangleRec(*rec, *color);
}
void draw_rectangle_pro_(Rectangle *rec, Vector2 *origin, float *rotation, Color *color)
{
	return DrawRectanglePro(*rec, *origin, *rotation, *color);
}
void draw_rectangle_gradient_v_(int *posX, int *posY, int *width, int *height, Color *color1, Color *color2)
{
	return DrawRectangleGradientV(*posX, *posY, *width, *height, *color1, *color2);
}
void draw_rectangle_gradient_h_(int *posX, int *posY, int *width, int *height, Color *color1, Color *color2)
{
	return DrawRectangleGradientH(*posX, *posY, *width, *height, *color1, *color2);
}
void draw_rectangle_gradient_ex_(Rectangle *rec, Color *col1, Color *col2, Color *col3, Color *col4)
{
	return DrawRectangleGradientEx(*rec, *col1, *col2, *col3, *col4);
}
void draw_rectangle_lines_(int *posX, int *posY, int *width, int *height, Color *color)
{
	return DrawRectangleLines(*posX, *posY, *width, *height, *color);
}
void draw_rectangle_lines_ex_(Rectangle *rec, float *lineThick, Color *color)
{
	return DrawRectangleLinesEx(*rec, *lineThick, *color);
}
void draw_rectangle_rounded_(Rectangle *rec, float *roundness, int *segments, Color *color)
{
	return DrawRectangleRounded(*rec, *roundness, *segments, *color);
}
void draw_rectangle_rounded_lines_(Rectangle *rec, float *roundness, int *segments, float *lineThick, Color *color)
{
	return DrawRectangleRoundedLines(*rec, *roundness, *segments, *lineThick, *color);
}
void draw_triangle_(Vector2 *v1, Vector2 *v2, Vector2 *v3, Color *color)
{
	return DrawTriangle(*v1, *v2, *v3, *color);
}
void draw_triangle_lines_(Vector2 *v1, Vector2 *v2, Vector2 *v3, Color *color)
{
	return DrawTriangleLines(*v1, *v2, *v3, *color);
}
void draw_triangle_fan_(Vector2 *points, int *pointCount, Color *color)
{
	return DrawTriangleFan(points, *pointCount, *color);
}
void draw_triangle_strip_(Vector2 *points, int *pointCount, Color *color)
{
	return DrawTriangleStrip(points, *pointCount, *color);
}
void draw_poly_(Vector2 *center, int *sides, float *radius, float *rotation, Color *color)
{
	return DrawPoly(*center, *sides, *radius, *rotation, *color);
}
void draw_poly_lines_(Vector2 *center, int *sides, float *radius, float *rotation, Color *color)
{
	return DrawPolyLines(*center, *sides, *radius, *rotation, *color);
}
void draw_poly_lines_ex_(Vector2 *center, int *sides, float *radius, float *rotation, float *lineThick, Color *color)
{
	return DrawPolyLinesEx(*center, *sides, *radius, *rotation, *lineThick, *color);
}
void draw_spline_linear_(Vector2 *points, int *pointCount, float *thick, Color *color)
{
	return DrawSplineLinear(points, *pointCount, *thick, *color);
}
void draw_spline_basis_(Vector2 *points, int *pointCount, float *thick, Color *color)
{
	return DrawSplineBasis(points, *pointCount, *thick, *color);
}
void draw_spline_catmull_rom_(Vector2 *points, int *pointCount, float *thick, Color *color)
{
	return DrawSplineCatmullRom(points, *pointCount, *thick, *color);
}
void draw_spline_bezier_quadratic_(Vector2 *points, int *pointCount, float *thick, Color *color)
{
	return DrawSplineBezierQuadratic(points, *pointCount, *thick, *color);
}
void draw_spline_bezier_cubic_(Vector2 *points, int *pointCount, float *thick, Color *color)
{
	return DrawSplineBezierCubic(points, *pointCount, *thick, *color);
}
void draw_spline_segment_linear_(Vector2 *p1, Vector2 *p2, float *thick, Color *color)
{
	return DrawSplineSegmentLinear(*p1, *p2, *thick, *color);
}
void draw_spline_segment_basis_(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float *thick, Color *color)
{
	return DrawSplineSegmentBasis(*p1, *p2, *p3, *p4, *thick, *color);
}
void draw_spline_segment_catmull_rom_(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float *thick, Color *color)
{
	return DrawSplineSegmentCatmullRom(*p1, *p2, *p3, *p4, *thick, *color);
}
void draw_spline_segment_bezier_quadratic_(Vector2 *p1, Vector2 *c2, Vector2 *p3, float *thick, Color *color)
{
	return DrawSplineSegmentBezierQuadratic(*p1, *c2, *p3, *thick, *color);
}
void draw_spline_segment_bezier_cubic_(Vector2 *p1, Vector2 *c2, Vector2 *c3, Vector2 *p4, float *thick, Color *color)
{
	return DrawSplineSegmentBezierCubic(*p1, *c2, *c3, *p4, *thick, *color);
}
Vector2 get_spline_point_linear_(Vector2 *startPos, Vector2 *endPos, float *t)
{
	return GetSplinePointLinear(*startPos, *endPos, *t);
}
Vector2 get_spline_point_basis_(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float *t)
{
	return GetSplinePointBasis(*p1, *p2, *p3, *p4, *t);
}
Vector2 get_spline_point_catmull_rom_(Vector2 *p1, Vector2 *p2, Vector2 *p3, Vector2 *p4, float *t)
{
	return GetSplinePointCatmullRom(*p1, *p2, *p3, *p4, *t);
}
Vector2 get_spline_point_bezier_quad_(Vector2 *p1, Vector2 *c2, Vector2 *p3, float *t)
{
	return GetSplinePointBezierQuad(*p1, *c2, *p3, *t);
}
Vector2 get_spline_point_bezier_cubic_(Vector2 *p1, Vector2 *c2, Vector2 *c3, Vector2 *p4, float *t)
{
	return GetSplinePointBezierCubic(*p1, *c2, *c3, *p4, *t);
}
_Bool check_collision_recs_(Rectangle *rec1, Rectangle *rec2)
{
	return CheckCollisionRecs(*rec1, *rec2);
}
_Bool check_collision_circles_(Vector2 *center1, float *radius1, Vector2 *center2, float *radius2)
{
	return CheckCollisionCircles(*center1, *radius1, *center2, *radius2);
}
_Bool check_collision_circle_rec_(Vector2 *center, float *radius, Rectangle *rec)
{
	return CheckCollisionCircleRec(*center, *radius, *rec);
}
_Bool check_collision_point_rec_(Vector2 *point, Rectangle *rec)
{
	return CheckCollisionPointRec(*point, *rec);
}
_Bool check_collision_point_circle_(Vector2 *point, Vector2 *center, float *radius)
{
	return CheckCollisionPointCircle(*point, *center, *radius);
}
_Bool check_collision_point_triangle_(Vector2 *point, Vector2 *p1, Vector2 *p2, Vector2 *p3)
{
	return CheckCollisionPointTriangle(*point, *p1, *p2, *p3);
}
_Bool check_collision_point_poly_(Vector2 *point, Vector2 *points, int *pointCount)
{
	return CheckCollisionPointPoly(*point, points, *pointCount);
}
_Bool check_collision_lines_(Vector2 *startPos1, Vector2 *endPos1, Vector2 *startPos2, Vector2 *endPos2, Vector2 *collisionPoint)
{
	return CheckCollisionLines(*startPos1, *endPos1, *startPos2, *endPos2, collisionPoint);
}
_Bool check_collision_point_line_(Vector2 *point, Vector2 *p1, Vector2 *p2, int *threshold)
{
	return CheckCollisionPointLine(*point, *p1, *p2, *threshold);
}
Rectangle get_collision_rec_(Rectangle *rec1, Rectangle *rec2)
{
	return GetCollisionRec(*rec1, *rec2);
}
Image load_image_(const char *fileName)
{
	return LoadImage(fileName);
}
Image load_image_raw_(const char *fileName, int *width, int *height, int *format, int *headerSize)
{
	return LoadImageRaw(fileName, *width, *height, *format, *headerSize);
}
Image load_image_svg_(const char *fileNameOrString, int *width, int *height)
{
	return LoadImageSvg(fileNameOrString, *width, *height);
}
Image load_image_anim_(const char *fileName, int *frames)
{
	return LoadImageAnim(fileName, frames);
}
Image load_image_from_memory_(const char *fileType, const unsigned char *fileData, int *dataSize)
{
	return LoadImageFromMemory(fileType, fileData, *dataSize);
}
Image load_image_from_texture_(Texture2D *texture)
{
	return LoadImageFromTexture(*texture);
}
Image load_image_from_screen_()
{
	return LoadImageFromScreen();
}
_Bool is_image_ready_(Image *image)
{
	return IsImageReady(*image);
}
void unload_image_(Image *image)
{
	return UnloadImage(*image);
}
_Bool export_image_(Image *image, const char *fileName)
{
	return ExportImage(*image, fileName);
}
unsigned char *_export_image_to_memory_(Image *image, const char *fileType, int *fileSize)
{
	return ExportImageToMemory(*image, fileType, fileSize);
}
_Bool export_image_as_code_(Image *image, const char *fileName)
{
	return ExportImageAsCode(*image, fileName);
}
Image gen_image_color_(int *width, int *height, Color *color)
{
	return GenImageColor(*width, *height, *color);
}
Image gen_image_gradient_linear_(int *width, int *height, int *direction, Color *start, Color *end)
{
	return GenImageGradientLinear(*width, *height, *direction, *start, *end);
}
Image gen_image_gradient_radial_(int *width, int *height, float *density, Color *inner, Color *outer)
{
	return GenImageGradientRadial(*width, *height, *density, *inner, *outer);
}
Image gen_image_gradient_square_(int *width, int *height, float *density, Color *inner, Color *outer)
{
	return GenImageGradientSquare(*width, *height, *density, *inner, *outer);
}
Image gen_image_checked_(int *width, int *height, int *checksX, int *checksY, Color *col1, Color *col2)
{
	return GenImageChecked(*width, *height, *checksX, *checksY, *col1, *col2);
}
Image gen_image_white_noise_(int *width, int *height, float *factor)
{
	return GenImageWhiteNoise(*width, *height, *factor);
}
Image gen_image_perlin_noise_(int *width, int *height, int *offsetX, int *offsetY, float *scale)
{
	return GenImagePerlinNoise(*width, *height, *offsetX, *offsetY, *scale);
}
Image gen_image_cellular_(int *width, int *height, int *tileSize)
{
	return GenImageCellular(*width, *height, *tileSize);
}
Image gen_image_text_(int *width, int *height, const char *text)
{
	return GenImageText(*width, *height, text);
}
Image image_copy_(Image *image)
{
	return ImageCopy(*image);
}
Image image_from_image_(Image *image, Rectangle *rec)
{
	return ImageFromImage(*image, *rec);
}
Image image_text_(const char *text, int *fontSize, Color *color)
{
	return ImageText(text, *fontSize, *color);
}
Image image_text_ex_(Font *font, const char *text, float *fontSize, float *spacing, Color *tint)
{
	return ImageTextEx(*font, text, *fontSize, *spacing, *tint);
}
void image_format_(Image *image, int *newFormat)
{
	return ImageFormat(image, *newFormat);
}
void image_to_p_o_t_(Image *image, Color *fill)
{
	return ImageToPOT(image, *fill);
}
void image_crop_(Image *image, Rectangle *crop)
{
	return ImageCrop(image, *crop);
}
void image_alpha_crop_(Image *image, float *threshold)
{
	return ImageAlphaCrop(image, *threshold);
}
void image_alpha_clear_(Image *image, Color *color, float *threshold)
{
	return ImageAlphaClear(image, *color, *threshold);
}
void image_alpha_mask_(Image *image, Image *alphaMask)
{
	return ImageAlphaMask(image, *alphaMask);
}
void image_alpha_premultiply_(Image *image)
{
	return ImageAlphaPremultiply(image);
}
void image_blur_gaussian_(Image *image, int *blurSize)
{
	return ImageBlurGaussian(image, *blurSize);
}
void image_resize_(Image *image, int *newWidth, int *newHeight)
{
	return ImageResize(image, *newWidth, *newHeight);
}
void image_resize_n_n_(Image *image, int *newWidth, int *newHeight)
{
	return ImageResizeNN(image, *newWidth, *newHeight);
}
void image_resize_canvas_(Image *image, int *newWidth, int *newHeight, int *offsetX, int *offsetY, Color *fill)
{
	return ImageResizeCanvas(image, *newWidth, *newHeight, *offsetX, *offsetY, *fill);
}
void image_mipmaps_(Image *image)
{
	return ImageMipmaps(image);
}
void image_dither_(Image *image, int *rBpp, int *gBpp, int *bBpp, int *aBpp)
{
	return ImageDither(image, *rBpp, *gBpp, *bBpp, *aBpp);
}
void image_flip_vertical_(Image *image)
{
	return ImageFlipVertical(image);
}
void image_flip_horizontal_(Image *image)
{
	return ImageFlipHorizontal(image);
}
void image_rotate_(Image *image, int *degrees)
{
	return ImageRotate(image, *degrees);
}
void image_rotate_c_w_(Image *image)
{
	return ImageRotateCW(image);
}
void image_rotate_c_c_w_(Image *image)
{
	return ImageRotateCCW(image);
}
void image_color_tint_(Image *image, Color *color)
{
	return ImageColorTint(image, *color);
}
void image_color_invert_(Image *image)
{
	return ImageColorInvert(image);
}
void image_color_grayscale_(Image *image)
{
	return ImageColorGrayscale(image);
}
void image_color_contrast_(Image *image, float *contrast)
{
	return ImageColorContrast(image, *contrast);
}
void image_color_brightness_(Image *image, int *brightness)
{
	return ImageColorBrightness(image, *brightness);
}
void image_color_replace_(Image *image, Color *color, Color *replace)
{
	return ImageColorReplace(image, *color, *replace);
}
Color *_load_image_colors_(Image *image)
{
	return LoadImageColors(*image);
}
Color *_load_image_palette_(Image *image, int *maxPaletteSize, int *colorCount)
{
	return LoadImagePalette(*image, *maxPaletteSize, colorCount);
}
void unload_image_colors_(Color *colors)
{
	return UnloadImageColors(colors);
}
void unload_image_palette_(Color *colors)
{
	return UnloadImagePalette(colors);
}
Rectangle get_image_alpha_border_(Image *image, float *threshold)
{
	return GetImageAlphaBorder(*image, *threshold);
}
Color get_image_color_(Image *image, int *x, int *y)
{
	return GetImageColor(*image, *x, *y);
}
void image_clear_background_(Image *dst, Color *color)
{
	return ImageClearBackground(dst, *color);
}
void image_draw_pixel_(Image *dst, int *posX, int *posY, Color *color)
{
	return ImageDrawPixel(dst, *posX, *posY, *color);
}
void image_draw_pixel_v_(Image *dst, Vector2 *position, Color *color)
{
	return ImageDrawPixelV(dst, *position, *color);
}
void image_draw_line_(Image *dst, int *startPosX, int *startPosY, int *endPosX, int *endPosY, Color *color)
{
	return ImageDrawLine(dst, *startPosX, *startPosY, *endPosX, *endPosY, *color);
}
void image_draw_line_v_(Image *dst, Vector2 *start, Vector2 *end, Color *color)
{
	return ImageDrawLineV(dst, *start, *end, *color);
}
void image_draw_circle_(Image *dst, int *centerX, int *centerY, int *radius, Color *color)
{
	return ImageDrawCircle(dst, *centerX, *centerY, *radius, *color);
}
void image_draw_circle_v_(Image *dst, Vector2 *center, int *radius, Color *color)
{
	return ImageDrawCircleV(dst, *center, *radius, *color);
}
void image_draw_circle_lines_(Image *dst, int *centerX, int *centerY, int *radius, Color *color)
{
	return ImageDrawCircleLines(dst, *centerX, *centerY, *radius, *color);
}
void image_draw_circle_lines_v_(Image *dst, Vector2 *center, int *radius, Color *color)
{
	return ImageDrawCircleLinesV(dst, *center, *radius, *color);
}
void image_draw_rectangle_(Image *dst, int *posX, int *posY, int *width, int *height, Color *color)
{
	return ImageDrawRectangle(dst, *posX, *posY, *width, *height, *color);
}
void image_draw_rectangle_v_(Image *dst, Vector2 *position, Vector2 *size, Color *color)
{
	return ImageDrawRectangleV(dst, *position, *size, *color);
}
void image_draw_rectangle_rec_(Image *dst, Rectangle *rec, Color *color)
{
	return ImageDrawRectangleRec(dst, *rec, *color);
}
void image_draw_rectangle_lines_(Image *dst, Rectangle *rec, int *thick, Color *color)
{
	return ImageDrawRectangleLines(dst, *rec, *thick, *color);
}
void image_draw_(Image *dst, Image *src, Rectangle *srcRec, Rectangle *dstRec, Color *tint)
{
	return ImageDraw(dst, *src, *srcRec, *dstRec, *tint);
}
void image_draw_text_(Image *dst, const char *text, int *posX, int *posY, int *fontSize, Color *color)
{
	return ImageDrawText(dst, text, *posX, *posY, *fontSize, *color);
}
void image_draw_text_ex_(Image *dst, Font *font, const char *text, Vector2 *position, float *fontSize, float *spacing, Color *tint)
{
	return ImageDrawTextEx(dst, *font, text, *position, *fontSize, *spacing, *tint);
}
Texture2D load_texture_(const char *fileName)
{
	return LoadTexture(fileName);
}
Texture2D load_texture_from_image_(Image *image)
{
	return LoadTextureFromImage(*image);
}
TextureCubemap load_texture_cubemap_(Image *image, int *layout)
{
	return LoadTextureCubemap(*image, *layout);
}
RenderTexture2D load_render_texture_(int *width, int *height)
{
	return LoadRenderTexture(*width, *height);
}
_Bool is_texture_ready_(Texture2D *texture)
{
	return IsTextureReady(*texture);
}
void unload_texture_(Texture2D *texture)
{
	return UnloadTexture(*texture);
}
_Bool is_render_texture_ready_(RenderTexture2D *target)
{
	return IsRenderTextureReady(*target);
}
void unload_render_texture_(RenderTexture2D *target)
{
	return UnloadRenderTexture(*target);
}
void update_texture_(Texture2D *texture, const void *pixels)
{
	return UpdateTexture(*texture, pixels);
}
void update_texture_rec_(Texture2D *texture, Rectangle *rec, const void *pixels)
{
	return UpdateTextureRec(*texture, *rec, pixels);
}
void gen_texture_mipmaps_(Texture2D *texture)
{
	return GenTextureMipmaps(texture);
}
void set_texture_filter_(Texture2D *texture, int *filter)
{
	return SetTextureFilter(*texture, *filter);
}
void set_texture_wrap_(Texture2D *texture, int *wrap)
{
	return SetTextureWrap(*texture, *wrap);
}
void draw_texture_(Texture2D *texture, int *posX, int *posY, Color *tint)
{
	return DrawTexture(*texture, *posX, *posY, *tint);
}
void draw_texture_v_(Texture2D *texture, Vector2 *position, Color *tint)
{
	return DrawTextureV(*texture, *position, *tint);
}
void draw_texture_ex_(Texture2D *texture, Vector2 *position, float *rotation, float *scale, Color *tint)
{
	return DrawTextureEx(*texture, *position, *rotation, *scale, *tint);
}
void draw_texture_rec_(Texture2D *texture, Rectangle *source, Vector2 *position, Color *tint)
{
	return DrawTextureRec(*texture, *source, *position, *tint);
}
void draw_texture_pro_(Texture2D *texture, Rectangle *source, Rectangle *dest, Vector2 *origin, float *rotation, Color *tint)
{
	return DrawTexturePro(*texture, *source, *dest, *origin, *rotation, *tint);
}
void draw_texture_n_patch_(Texture2D *texture, NPatchInfo *nPatchInfo, Rectangle *dest, Vector2 *origin, float *rotation, Color *tint)
{
	return DrawTextureNPatch(*texture, *nPatchInfo, *dest, *origin, *rotation, *tint);
}
Color fade_(Color *color, float *alpha)
{
	return Fade(*color, *alpha);
}
int color_to_int_(Color *color)
{
	return ColorToInt(*color);
}
Vector4 color_normalize_(Color *color)
{
	return ColorNormalize(*color);
}
Color color_from_normalized_(Vector4 *normalized)
{
	return ColorFromNormalized(*normalized);
}
Vector3 color_to_h_s_v_(Color *color)
{
	return ColorToHSV(*color);
}
Color color_from_h_s_v_(float *hue, float *saturation, float *value)
{
	return ColorFromHSV(*hue, *saturation, *value);
}
Color color_tint_(Color *color, Color *tint)
{
	return ColorTint(*color, *tint);
}
Color color_brightness_(Color *color, float *factor)
{
	return ColorBrightness(*color, *factor);
}
Color color_contrast_(Color *color, float *contrast)
{
	return ColorContrast(*color, *contrast);
}
Color color_alpha_(Color *color, float *alpha)
{
	return ColorAlpha(*color, *alpha);
}
Color color_alpha_blend_(Color *dst, Color *src, Color *tint)
{
	return ColorAlphaBlend(*dst, *src, *tint);
}
Color get_color_(unsigned int *hexValue)
{
	return GetColor(*hexValue);
}
Color get_pixel_color_(void *srcPtr, int *format)
{
	return GetPixelColor(srcPtr, *format);
}
void set_pixel_color_(void *dstPtr, Color *color, int *format)
{
	return SetPixelColor(dstPtr, *color, *format);
}
int get_pixel_data_size_(int *width, int *height, int *format)
{
	return GetPixelDataSize(*width, *height, *format);
}
Font get_font_default_()
{
	return GetFontDefault();
}
Font load_font_(const char *fileName)
{
	return LoadFont(fileName);
}
Font load_font_ex_(const char *fileName, int *fontSize, int *codepoints, int *codepointCount)
{
	return LoadFontEx(fileName, *fontSize, codepoints, *codepointCount);
}
Font load_font_from_image_(Image *image, Color *key, int *firstChar)
{
	return LoadFontFromImage(*image, *key, *firstChar);
}
Font load_font_from_memory_(const char *fileType, const unsigned char *fileData, int *dataSize, int *fontSize, int *codepoints, int *codepointCount)
{
	return LoadFontFromMemory(fileType, fileData, *dataSize, *fontSize, codepoints, *codepointCount);
}
_Bool is_font_ready_(Font *font)
{
	return IsFontReady(*font);
}
GlyphInfo *_load_font_data_(const unsigned char *fileData, int *dataSize, int *fontSize, int *codepoints, int *codepointCount, int *type)
{
	return LoadFontData(fileData, *dataSize, *fontSize, codepoints, *codepointCount, *type);
}
Image gen_image_font_atlas_(const GlyphInfo *glyphs, Rectangle **glyphRecs, int *glyphCount, int *fontSize, int *padding, int *packMethod)
{
	return GenImageFontAtlas(glyphs, glyphRecs, *glyphCount, *fontSize, *padding, *packMethod);
}
void unload_font_data_(GlyphInfo *glyphs, int *glyphCount)
{
	return UnloadFontData(glyphs, *glyphCount);
}
void unload_font_(Font *font)
{
	return UnloadFont(*font);
}
_Bool export_font_as_code_(Font *font, const char *fileName)
{
	return ExportFontAsCode(*font, fileName);
}
void draw_f_p_s_(int *posX, int *posY)
{
	return DrawFPS(*posX, *posY);
}
void draw_text_(const char *text, int *posX, int *posY, int *fontSize, Color *color)
{
	return DrawText(text, *posX, *posY, *fontSize, *color);
}
void draw_text_ex_(Font *font, const char *text, Vector2 *position, float *fontSize, float *spacing, Color *tint)
{
	return DrawTextEx(*font, text, *position, *fontSize, *spacing, *tint);
}
void draw_text_pro_(Font *font, const char *text, Vector2 *position, Vector2 *origin, float *rotation, float *fontSize, float *spacing, Color *tint)
{
	return DrawTextPro(*font, text, *position, *origin, *rotation, *fontSize, *spacing, *tint);
}
void draw_text_codepoint_(Font *font, int *codepoint, Vector2 *position, float *fontSize, Color *tint)
{
	return DrawTextCodepoint(*font, *codepoint, *position, *fontSize, *tint);
}
void draw_text_codepoints_(Font *font, const int *codepoints, int *codepointCount, Vector2 *position, float *fontSize, float *spacing, Color *tint)
{
	return DrawTextCodepoints(*font, codepoints, *codepointCount, *position, *fontSize, *spacing, *tint);
}
void set_text_line_spacing_(int *spacing)
{
	return SetTextLineSpacing(*spacing);
}
int measure_text_(const char *text, int *fontSize)
{
	return MeasureText(text, *fontSize);
}
Vector2 measure_text_ex_(Font *font, const char *text, float *fontSize, float *spacing)
{
	return MeasureTextEx(*font, text, *fontSize, *spacing);
}
int get_glyph_index_(Font *font, int *codepoint)
{
	return GetGlyphIndex(*font, *codepoint);
}
GlyphInfo get_glyph_info_(Font *font, int *codepoint)
{
	return GetGlyphInfo(*font, *codepoint);
}
Rectangle get_glyph_atlas_rec_(Font *font, int *codepoint)
{
	return GetGlyphAtlasRec(*font, *codepoint);
}
char *_load_u_t_f8_(const int *codepoints, int *length)
{
	return LoadUTF8(codepoints, *length);
}
void unload_u_t_f8_(char *text)
{
	return UnloadUTF8(text);
}
int *_load_codepoints_(const char *text, int *count)
{
	return LoadCodepoints(text, count);
}
void unload_codepoints_(int *codepoints)
{
	return UnloadCodepoints(codepoints);
}
int get_codepoint_count_(const char *text)
{
	return GetCodepointCount(text);
}
int get_codepoint_(const char *text, int *codepointSize)
{
	return GetCodepoint(text, codepointSize);
}
int get_codepoint_next_(const char *text, int *codepointSize)
{
	return GetCodepointNext(text, codepointSize);
}
int get_codepoint_previous_(const char *text, int *codepointSize)
{
	return GetCodepointPrevious(text, codepointSize);
}
const char *_codepoint_to_u_t_f8_(int *codepoint, int *utf8Size)
{
	return CodepointToUTF8(*codepoint, utf8Size);
}
int text_copy_(char *dst, const char *src)
{
	return TextCopy(dst, src);
}
_Bool text_is_equal_(const char *text1, const char *text2)
{
	return TextIsEqual(text1, text2);
}
unsigned int text_length_(const char *text)
{
	return TextLength(text);
}
const char *_text_format_(const char *text, ...)
{
	return TextFormat(text);
}
const char *_text_subtext_(const char *text, int *position, int *length)
{
	return TextSubtext(text, *position, *length);
}
char *_text_replace_(const char *text, const char *replace, const char *by)
{
	return TextReplace(text, replace, by);
}
char *_text_insert_(const char *text, const char *insert, int *position)
{
	return TextInsert(text, insert, *position);
}
const char *_text_join_(const char **textList, int *count, const char *delimiter)
{
	return TextJoin(textList, *count, delimiter);
}
const char **_text_split_(const char *text, char *delimiter, int *count)
{
	return *TextSplit(text, *delimiter, count);
}
void text_append_(char *text, const char *append, int *position)
{
	return TextAppend(text, append, position);
}
int text_find_index_(const char *text, const char *find)
{
	return TextFindIndex(text, find);
}
const char *_text_to_upper_(const char *text)
{
	return TextToUpper(text);
}
const char *_text_to_lower_(const char *text)
{
	return TextToLower(text);
}
const char *_text_to_pascal_(const char *text)
{
	return TextToPascal(text);
}
int text_to_integer_(const char *text)
{
	return TextToInteger(text);
}
void draw_line3_d_(Vector3 *startPos, Vector3 *endPos, Color *color)
{
	return DrawLine3D(*startPos, *endPos, *color);
}
void draw_point3_d_(Vector3 *position, Color *color)
{
	return DrawPoint3D(*position, *color);
}
void draw_circle3_d_(Vector3 *center, float *radius, Vector3 *rotationAxis, float *rotationAngle, Color *color)
{
	return DrawCircle3D(*center, *radius, *rotationAxis, *rotationAngle, *color);
}
void draw_triangle3_d_(Vector3 *v1, Vector3 *v2, Vector3 *v3, Color *color)
{
	return DrawTriangle3D(*v1, *v2, *v3, *color);
}
void draw_triangle_strip3_d_(Vector3 *points, int *pointCount, Color *color)
{
	return DrawTriangleStrip3D(points, *pointCount, *color);
}
void draw_cube_(Vector3 *position, float *width, float *height, float *length, Color *color)
{
	return DrawCube(*position, *width, *height, *length, *color);
}
void draw_cube_v_(Vector3 *position, Vector3 *size, Color *color)
{
	return DrawCubeV(*position, *size, *color);
}
void draw_cube_wires_(Vector3 *position, float *width, float *height, float *length, Color *color)
{
	return DrawCubeWires(*position, *width, *height, *length, *color);
}
void draw_cube_wires_v_(Vector3 *position, Vector3 *size, Color *color)
{
	return DrawCubeWiresV(*position, *size, *color);
}
void draw_sphere_(Vector3 *centerPos, float *radius, Color *color)
{
	return DrawSphere(*centerPos, *radius, *color);
}
void draw_sphere_ex_(Vector3 *centerPos, float *radius, int *rings, int *slices, Color *color)
{
	return DrawSphereEx(*centerPos, *radius, *rings, *slices, *color);
}
void draw_sphere_wires_(Vector3 *centerPos, float *radius, int *rings, int *slices, Color *color)
{
	return DrawSphereWires(*centerPos, *radius, *rings, *slices, *color);
}
void draw_cylinder_(Vector3 *position, float *radiusTop, float *radiusBottom, float *height, int *slices, Color *color)
{
	return DrawCylinder(*position, *radiusTop, *radiusBottom, *height, *slices, *color);
}
void draw_cylinder_ex_(Vector3 *startPos, Vector3 *endPos, float *startRadius, float *endRadius, int *sides, Color *color)
{
	return DrawCylinderEx(*startPos, *endPos, *startRadius, *endRadius, *sides, *color);
}
void draw_cylinder_wires_(Vector3 *position, float *radiusTop, float *radiusBottom, float *height, int *slices, Color *color)
{
	return DrawCylinderWires(*position, *radiusTop, *radiusBottom, *height, *slices, *color);
}
void draw_cylinder_wires_ex_(Vector3 *startPos, Vector3 *endPos, float *startRadius, float *endRadius, int *sides, Color *color)
{
	return DrawCylinderWiresEx(*startPos, *endPos, *startRadius, *endRadius, *sides, *color);
}
void draw_capsule_(Vector3 *startPos, Vector3 *endPos, float *radius, int *slices, int *rings, Color *color)
{
	return DrawCapsule(*startPos, *endPos, *radius, *slices, *rings, *color);
}
void draw_capsule_wires_(Vector3 *startPos, Vector3 *endPos, float *radius, int *slices, int *rings, Color *color)
{
	return DrawCapsuleWires(*startPos, *endPos, *radius, *slices, *rings, *color);
}
void draw_plane_(Vector3 *centerPos, Vector2 *size, Color *color)
{
	return DrawPlane(*centerPos, *size, *color);
}
void draw_ray_(Ray *ray, Color *color)
{
	return DrawRay(*ray, *color);
}
void draw_grid_(int *slices, float *spacing)
{
	return DrawGrid(*slices, *spacing);
}
Model load_model_(const char *fileName)
{
	return LoadModel(fileName);
}
Model load_model_from_mesh_(Mesh *mesh)
{
	return LoadModelFromMesh(*mesh);
}
_Bool is_model_ready_(Model *model)
{
	return IsModelReady(*model);
}
void unload_model_(Model *model)
{
	return UnloadModel(*model);
}
BoundingBox get_model_bounding_box_(Model *model)
{
	return GetModelBoundingBox(*model);
}
void draw_model_(Model *model, Vector3 *position, float *scale, Color *tint)
{
	return DrawModel(*model, *position, *scale, *tint);
}
void draw_model_ex_(Model *model, Vector3 *position, Vector3 *rotationAxis, float *rotationAngle, Vector3 *scale, Color *tint)
{
	return DrawModelEx(*model, *position, *rotationAxis, *rotationAngle, *scale, *tint);
}
void draw_model_wires_(Model *model, Vector3 *position, float *scale, Color *tint)
{
	return DrawModelWires(*model, *position, *scale, *tint);
}
void draw_model_wires_ex_(Model *model, Vector3 *position, Vector3 *rotationAxis, float *rotationAngle, Vector3 *scale, Color *tint)
{
	return DrawModelWiresEx(*model, *position, *rotationAxis, *rotationAngle, *scale, *tint);
}
void draw_bounding_box_(BoundingBox *box, Color *color)
{
	return DrawBoundingBox(*box, *color);
}
void draw_billboard_(Camera *camera, Texture2D *texture, Vector3 *position, float *size, Color *tint)
{
	return DrawBillboard(*camera, *texture, *position, *size, *tint);
}
void draw_billboard_rec_(Camera *camera, Texture2D *texture, Rectangle *source, Vector3 *position, Vector2 *size, Color *tint)
{
	return DrawBillboardRec(*camera, *texture, *source, *position, *size, *tint);
}
void draw_billboard_pro_(Camera *camera, Texture2D *texture, Rectangle *source, Vector3 *position, Vector3 *up, Vector2 *size, Vector2 *origin, float *rotation, Color *tint)
{
	return DrawBillboardPro(*camera, *texture, *source, *position, *up, *size, *origin, *rotation, *tint);
}
void upload_mesh_(Mesh *mesh, _Bool *dynamic)
{
	return UploadMesh(mesh, *dynamic);
}
void update_mesh_buffer_(Mesh *mesh, int *index, const void *data, int *dataSize, int *offset)
{
	return UpdateMeshBuffer(*mesh, *index, data, *dataSize, *offset);
}
void unload_mesh_(Mesh *mesh)
{
	return UnloadMesh(*mesh);
}
void draw_mesh_(Mesh *mesh, Material *material, Matrix *transform)
{
	return DrawMesh(*mesh, *material, *transform);
}
void draw_mesh_instanced_(Mesh *mesh, Material *material, const Matrix *transforms, int *instances)
{
	return DrawMeshInstanced(*mesh, *material, transforms, *instances);
}
BoundingBox get_mesh_bounding_box_(Mesh *mesh)
{
	return GetMeshBoundingBox(*mesh);
}
void gen_mesh_tangents_(Mesh *mesh)
{
	return GenMeshTangents(mesh);
}
_Bool export_mesh_(Mesh *mesh, const char *fileName)
{
	return ExportMesh(*mesh, fileName);
}
Mesh gen_mesh_poly_(int *sides, float *radius)
{
	return GenMeshPoly(*sides, *radius);
}
Mesh gen_mesh_plane_(float *width, float *length, int *resX, int *resZ)
{
	return GenMeshPlane(*width, *length, *resX, *resZ);
}
Mesh gen_mesh_cube_(float *width, float *height, float *length)
{
	return GenMeshCube(*width, *height, *length);
}
Mesh gen_mesh_sphere_(float *radius, int *rings, int *slices)
{
	return GenMeshSphere(*radius, *rings, *slices);
}
Mesh gen_mesh_hemi_sphere_(float *radius, int *rings, int *slices)
{
	return GenMeshHemiSphere(*radius, *rings, *slices);
}
Mesh gen_mesh_cylinder_(float *radius, float *height, int *slices)
{
	return GenMeshCylinder(*radius, *height, *slices);
}
Mesh gen_mesh_cone_(float *radius, float *height, int *slices)
{
	return GenMeshCone(*radius, *height, *slices);
}
Mesh gen_mesh_torus_(float *radius, float *size, int *radSeg, int *sides)
{
	return GenMeshTorus(*radius, *size, *radSeg, *sides);
}
Mesh gen_mesh_knot_(float *radius, float *size, int *radSeg, int *sides)
{
	return GenMeshKnot(*radius, *size, *radSeg, *sides);
}
Mesh gen_mesh_heightmap_(Image *heightmap, Vector3 *size)
{
	return GenMeshHeightmap(*heightmap, *size);
}
Mesh gen_mesh_cubicmap_(Image *cubicmap, Vector3 *cubeSize)
{
	return GenMeshCubicmap(*cubicmap, *cubeSize);
}
Material *_load_materials_(const char *fileName, int *materialCount)
{
	return LoadMaterials(fileName, materialCount);
}
Material load_material_default_()
{
	return LoadMaterialDefault();
}
_Bool is_material_ready_(Material *material)
{
	return IsMaterialReady(*material);
}
void unload_material_(Material *material)
{
	return UnloadMaterial(*material);
}
void set_material_texture_(Material *material, int *mapType, Texture2D *texture)
{
	return SetMaterialTexture(material, *mapType, *texture);
}
void set_model_mesh_material_(Model *model, int *meshId, int *materialId)
{
	return SetModelMeshMaterial(model, *meshId, *materialId);
}
ModelAnimation *_load_model_animations_(const char *fileName, int *animCount)
{
	return LoadModelAnimations(fileName, animCount);
}
void update_model_animation_(Model *model, ModelAnimation *anim, int *frame)
{
	return UpdateModelAnimation(*model, *anim, *frame);
}
void unload_model_animation_(ModelAnimation *anim)
{
	return UnloadModelAnimation(*anim);
}
void unload_model_animations_(ModelAnimation *animations, int *animCount)
{
	return UnloadModelAnimations(animations, *animCount);
}
_Bool is_model_animation_valid_(Model *model, ModelAnimation *anim)
{
	return IsModelAnimationValid(*model, *anim);
}
_Bool check_collision_spheres_(Vector3 *center1, float *radius1, Vector3 *center2, float *radius2)
{
	return CheckCollisionSpheres(*center1, *radius1, *center2, *radius2);
}
_Bool check_collision_boxes_(BoundingBox *box1, BoundingBox *box2)
{
	return CheckCollisionBoxes(*box1, *box2);
}
_Bool check_collision_box_sphere_(BoundingBox *box, Vector3 *center, float *radius)
{
	return CheckCollisionBoxSphere(*box, *center, *radius);
}
RayCollision get_ray_collision_sphere_(Ray *ray, Vector3 *center, float *radius)
{
	return GetRayCollisionSphere(*ray, *center, *radius);
}
RayCollision get_ray_collision_box_(Ray *ray, BoundingBox *box)
{
	return GetRayCollisionBox(*ray, *box);
}
RayCollision get_ray_collision_mesh_(Ray *ray, Mesh *mesh, Matrix *transform)
{
	return GetRayCollisionMesh(*ray, *mesh, *transform);
}
RayCollision get_ray_collision_triangle_(Ray *ray, Vector3 *p1, Vector3 *p2, Vector3 *p3)
{
	return GetRayCollisionTriangle(*ray, *p1, *p2, *p3);
}
RayCollision get_ray_collision_quad_(Ray *ray, Vector3 *p1, Vector3 *p2, Vector3 *p3, Vector3 *p4)
{
	return GetRayCollisionQuad(*ray, *p1, *p2, *p3, *p4);
}
void init_audio_device_()
{
	return InitAudioDevice();
}
void close_audio_device_()
{
	return CloseAudioDevice();
}
_Bool is_audio_device_ready_()
{
	return IsAudioDeviceReady();
}
void set_master_volume_(float *volume)
{
	return SetMasterVolume(*volume);
}
float get_master_volume_()
{
	return GetMasterVolume();
}
Wave load_wave_(const char *fileName)
{
	return LoadWave(fileName);
}
Wave load_wave_from_memory_(const char *fileType, const unsigned char *fileData, int *dataSize)
{
	return LoadWaveFromMemory(fileType, fileData, *dataSize);
}
_Bool is_wave_ready_(Wave *wave)
{
	return IsWaveReady(*wave);
}
Sound load_sound_(const char *fileName)
{
	return LoadSound(fileName);
}
Sound load_sound_from_wave_(Wave *wave)
{
	return LoadSoundFromWave(*wave);
}
Sound load_sound_alias_(Sound *source)
{
	return LoadSoundAlias(*source);
}
_Bool is_sound_ready_(Sound *sound)
{
	return IsSoundReady(*sound);
}
void update_sound_(Sound *sound, const void *data, int *sampleCount)
{
	return UpdateSound(*sound, data, *sampleCount);
}
void unload_wave_(Wave *wave)
{
	return UnloadWave(*wave);
}
void unload_sound_(Sound *sound)
{
	return UnloadSound(*sound);
}
void unload_sound_alias_(Sound *alias)
{
	return UnloadSoundAlias(*alias);
}
_Bool export_wave_(Wave *wave, const char *fileName)
{
	return ExportWave(*wave, fileName);
}
_Bool export_wave_as_code_(Wave *wave, const char *fileName)
{
	return ExportWaveAsCode(*wave, fileName);
}
void play_sound_(Sound *sound)
{
	return PlaySound(*sound);
}
void stop_sound_(Sound *sound)
{
	return StopSound(*sound);
}
void pause_sound_(Sound *sound)
{
	return PauseSound(*sound);
}
void resume_sound_(Sound *sound)
{
	return ResumeSound(*sound);
}
_Bool is_sound_playing_(Sound *sound)
{
	return IsSoundPlaying(*sound);
}
void set_sound_volume_(Sound *sound, float *volume)
{
	return SetSoundVolume(*sound, *volume);
}
void set_sound_pitch_(Sound *sound, float *pitch)
{
	return SetSoundPitch(*sound, *pitch);
}
void set_sound_pan_(Sound *sound, float *pan)
{
	return SetSoundPan(*sound, *pan);
}
Wave wave_copy_(Wave *wave)
{
	return WaveCopy(*wave);
}
void wave_crop_(Wave *wave, int *initSample, int *finalSample)
{
	return WaveCrop(wave, *initSample, *finalSample);
}
void wave_format_(Wave *wave, int *sampleRate, int *sampleSize, int *channels)
{
	return WaveFormat(wave, *sampleRate, *sampleSize, *channels);
}
float *_load_wave_samples_(Wave *wave)
{
	return LoadWaveSamples(*wave);
}
void unload_wave_samples_(float *samples)
{
	return UnloadWaveSamples(samples);
}
Music load_music_stream_(const char *fileName)
{
	return LoadMusicStream(fileName);
}
Music load_music_stream_from_memory_(const char *fileType, const unsigned char *data, int *dataSize)
{
	return LoadMusicStreamFromMemory(fileType, data, *dataSize);
}
_Bool is_music_ready_(Music *music)
{
	return IsMusicReady(*music);
}
void unload_music_stream_(Music *music)
{
	return UnloadMusicStream(*music);
}
void play_music_stream_(Music *music)
{
	return PlayMusicStream(*music);
}
_Bool is_music_stream_playing_(Music *music)
{
	return IsMusicStreamPlaying(*music);
}
void update_music_stream_(Music *music)
{
	return UpdateMusicStream(*music);
}
void stop_music_stream_(Music *music)
{
	return StopMusicStream(*music);
}
void pause_music_stream_(Music *music)
{
	return PauseMusicStream(*music);
}
void resume_music_stream_(Music *music)
{
	return ResumeMusicStream(*music);
}
void seek_music_stream_(Music *music, float *position)
{
	return SeekMusicStream(*music, *position);
}
void set_music_volume_(Music *music, float *volume)
{
	return SetMusicVolume(*music, *volume);
}
void set_music_pitch_(Music *music, float *pitch)
{
	return SetMusicPitch(*music, *pitch);
}
void set_music_pan_(Music *music, float *pan)
{
	return SetMusicPan(*music, *pan);
}
float get_music_time_length_(Music *music)
{
	return GetMusicTimeLength(*music);
}
float get_music_time_played_(Music *music)
{
	return GetMusicTimePlayed(*music);
}
AudioStream load_audio_stream_(unsigned int *sampleRate, unsigned int *sampleSize, unsigned int *channels)
{
	return LoadAudioStream(*sampleRate, *sampleSize, *channels);
}
_Bool is_audio_stream_ready_(AudioStream *stream)
{
	return IsAudioStreamReady(*stream);
}
void unload_audio_stream_(AudioStream *stream)
{
	return UnloadAudioStream(*stream);
}
void update_audio_stream_(AudioStream *stream, const void *data, int *frameCount)
{
	return UpdateAudioStream(*stream, data, *frameCount);
}
_Bool is_audio_stream_processed_(AudioStream *stream)
{
	return IsAudioStreamProcessed(*stream);
}
void play_audio_stream_(AudioStream *stream)
{
	return PlayAudioStream(*stream);
}
void pause_audio_stream_(AudioStream *stream)
{
	return PauseAudioStream(*stream);
}
void resume_audio_stream_(AudioStream *stream)
{
	return ResumeAudioStream(*stream);
}
_Bool is_audio_stream_playing_(AudioStream *stream)
{
	return IsAudioStreamPlaying(*stream);
}
void stop_audio_stream_(AudioStream *stream)
{
	return StopAudioStream(*stream);
}
void set_audio_stream_volume_(AudioStream *stream, float *volume)
{
	return SetAudioStreamVolume(*stream, *volume);
}
void set_audio_stream_pitch_(AudioStream *stream, float *pitch)
{
	return SetAudioStreamPitch(*stream, *pitch);
}
void set_audio_stream_pan_(AudioStream *stream, float *pan)
{
	return SetAudioStreamPan(*stream, *pan);
}
void set_audio_stream_buffer_size_default_(int *size)
{
	return SetAudioStreamBufferSizeDefault(*size);
}
void set_audio_stream_callback_(AudioStream *stream, AudioCallback *callback)
{
	return SetAudioStreamCallback(*stream, *callback);
}
void attach_audio_stream_processor_(AudioStream *stream, AudioCallback *processor)
{
	return AttachAudioStreamProcessor(*stream, *processor);
}
void detach_audio_stream_processor_(AudioStream *stream, AudioCallback *processor)
{
	return DetachAudioStreamProcessor(*stream, *processor);
}
void attach_audio_mixed_processor_(AudioCallback *processor)
{
	return AttachAudioMixedProcessor(*processor);
}
void detach_audio_mixed_processor_(AudioCallback *processor)
{
	return DetachAudioMixedProcessor(*processor);
}
#include <rcamera.h>
#include <rlgl.h>
void rl_matrix_mode_(int *mode)
{
	return rlMatrixMode(*mode);
}
void rl_push_matrix_()
{
	return rlPushMatrix();
}
void rl_pop_matrix_()
{
	return rlPopMatrix();
}
void rl_load_identity_()
{
	return rlLoadIdentity();
}
void rl_translatef_(float *x, float *y, float *z)
{
	return rlTranslatef(*x, *y, *z);
}
void rl_rotatef_(float *angle, float *x, float *y, float *z)
{
	return rlRotatef(*angle, *x, *y, *z);
}
void rl_scalef_(float *x, float *y, float *z)
{
	return rlScalef(*x, *y, *z);
}
void rl_mult_matrixf_(const float *matf)
{
	return rlMultMatrixf(matf);
}
void rl_frustum_(double *left, double *right, double *bottom, double *top, double *znear, double *zfar)
{
	return rlFrustum(*left, *right, *bottom, *top, *znear, *zfar);
}
void rl_ortho_(double *left, double *right, double *bottom, double *top, double *znear, double *zfar)
{
	return rlOrtho(*left, *right, *bottom, *top, *znear, *zfar);
}
void rl_viewport_(int *x, int *y, int *width, int *height)
{
	return rlViewport(*x, *y, *width, *height);
}
void rl_begin_(int *mode)
{
	return rlBegin(*mode);
}
void rl_end_()
{
	return rlEnd();
}
void rl_vertex2i_(int *x, int *y)
{
	return rlVertex2i(*x, *y);
}
void rl_vertex2f_(float *x, float *y)
{
	return rlVertex2f(*x, *y);
}
void rl_vertex3f_(float *x, float *y, float *z)
{
	return rlVertex3f(*x, *y, *z);
}
void rl_tex_coord2f_(float *x, float *y)
{
	return rlTexCoord2f(*x, *y);
}
void rl_normal3f_(float *x, float *y, float *z)
{
	return rlNormal3f(*x, *y, *z);
}
void rl_color4ub_(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a)
{
	return rlColor4ub(*r, *g, *b, *a);
}
void rl_color3f_(float *x, float *y, float *z)
{
	return rlColor3f(*x, *y, *z);
}
void rl_color4f_(float *x, float *y, float *z, float *w)
{
	return rlColor4f(*x, *y, *z, *w);
}
_Bool rl_enable_vertex_array_(unsigned int *vaoId)
{
	return rlEnableVertexArray(*vaoId);
}
void rl_disable_vertex_array_()
{
	return rlDisableVertexArray();
}
void rl_enable_vertex_buffer_(unsigned int *id)
{
	return rlEnableVertexBuffer(*id);
}
void rl_disable_vertex_buffer_()
{
	return rlDisableVertexBuffer();
}
void rl_enable_vertex_buffer_element_(unsigned int *id)
{
	return rlEnableVertexBufferElement(*id);
}
void rl_disable_vertex_buffer_element_()
{
	return rlDisableVertexBufferElement();
}
void rl_enable_vertex_attribute_(unsigned int *index)
{
	return rlEnableVertexAttribute(*index);
}
void rl_disable_vertex_attribute_(unsigned int *index)
{
	return rlDisableVertexAttribute(*index);
}
void rl_active_texture_slot_(int *slot)
{
	return rlActiveTextureSlot(*slot);
}
void rl_enable_texture_(unsigned int *id)
{
	return rlEnableTexture(*id);
}
void rl_disable_texture_()
{
	return rlDisableTexture();
}
void rl_enable_texture_cubemap_(unsigned int *id)
{
	return rlEnableTextureCubemap(*id);
}
void rl_disable_texture_cubemap_()
{
	return rlDisableTextureCubemap();
}
void rl_texture_parameters_(unsigned int *id, int *param, int *value)
{
	return rlTextureParameters(*id, *param, *value);
}
void rl_cubemap_parameters_(unsigned int *id, int *param, int *value)
{
	return rlCubemapParameters(*id, *param, *value);
}
void rl_enable_shader_(unsigned int *id)
{
	return rlEnableShader(*id);
}
void rl_disable_shader_()
{
	return rlDisableShader();
}
void rl_enable_framebuffer_(unsigned int *id)
{
	return rlEnableFramebuffer(*id);
}
void rl_disable_framebuffer_()
{
	return rlDisableFramebuffer();
}
void rl_active_draw_buffers_(int *count)
{
	return rlActiveDrawBuffers(*count);
}
void rl_blit_framebuffer_(int *srcX, int *srcY, int *srcWidth, int *srcHeight, int *dstX, int *dstY, int *dstWidth, int *dstHeight, int *bufferMask)
{
	return rlBlitFramebuffer(*srcX, *srcY, *srcWidth, *srcHeight, *dstX, *dstY, *dstWidth, *dstHeight, *bufferMask);
}
void rl_enable_color_blend_()
{
	return rlEnableColorBlend();
}
void rl_disable_color_blend_()
{
	return rlDisableColorBlend();
}
void rl_enable_depth_test_()
{
	return rlEnableDepthTest();
}
void rl_disable_depth_test_()
{
	return rlDisableDepthTest();
}
void rl_enable_depth_mask_()
{
	return rlEnableDepthMask();
}
void rl_disable_depth_mask_()
{
	return rlDisableDepthMask();
}
void rl_enable_backface_culling_()
{
	return rlEnableBackfaceCulling();
}
void rl_disable_backface_culling_()
{
	return rlDisableBackfaceCulling();
}
void rl_set_cull_face_(int *mode)
{
	return rlSetCullFace(*mode);
}
void rl_enable_scissor_test_()
{
	return rlEnableScissorTest();
}
void rl_disable_scissor_test_()
{
	return rlDisableScissorTest();
}
void rl_scissor_(int *x, int *y, int *width, int *height)
{
	return rlScissor(*x, *y, *width, *height);
}
void rl_enable_wire_mode_()
{
	return rlEnableWireMode();
}
void rl_enable_point_mode_()
{
	return rlEnablePointMode();
}
void rl_disable_wire_mode_()
{
	return rlDisableWireMode();
}
void rl_set_line_width_(float *width)
{
	return rlSetLineWidth(*width);
}
float rl_get_line_width_()
{
	return rlGetLineWidth();
}
void rl_enable_smooth_lines_()
{
	return rlEnableSmoothLines();
}
void rl_disable_smooth_lines_()
{
	return rlDisableSmoothLines();
}
void rl_enable_stereo_render_()
{
	return rlEnableStereoRender();
}
void rl_disable_stereo_render_()
{
	return rlDisableStereoRender();
}
_Bool rl_is_stereo_render_enabled_()
{
	return rlIsStereoRenderEnabled();
}
void rl_clear_color_(unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a)
{
	return rlClearColor(*r, *g, *b, *a);
}
void rl_clear_screen_buffers_()
{
	return rlClearScreenBuffers();
}
void rl_check_errors_()
{
	return rlCheckErrors();
}
void rl_set_blend_mode_(int *mode)
{
	return rlSetBlendMode(*mode);
}
void rl_set_blend_factors_(int *glSrcFactor, int *glDstFactor, int *glEquation)
{
	return rlSetBlendFactors(*glSrcFactor, *glDstFactor, *glEquation);
}
void rl_set_blend_factors_separate_(int *glSrcRGB, int *glDstRGB, int *glSrcAlpha, int *glDstAlpha, int *glEqRGB, int *glEqAlpha)
{
	return rlSetBlendFactorsSeparate(*glSrcRGB, *glDstRGB, *glSrcAlpha, *glDstAlpha, *glEqRGB, *glEqAlpha);
}
void rlgl_init_(int *width, int *height)
{
	return rlglInit(*width, *height);
}
void rlgl_close_()
{
	return rlglClose();
}
void rl_load_extensions_(void *loader)
{
	return rlLoadExtensions(loader);
}
int rl_get_version_()
{
	return rlGetVersion();
}
void rl_set_framebuffer_width_(int *width)
{
	return rlSetFramebufferWidth(*width);
}
int rl_get_framebuffer_width_()
{
	return rlGetFramebufferWidth();
}
void rl_set_framebuffer_height_(int *height)
{
	return rlSetFramebufferHeight(*height);
}
int rl_get_framebuffer_height_()
{
	return rlGetFramebufferHeight();
}
unsigned int rl_get_texture_id_default_()
{
	return rlGetTextureIdDefault();
}
unsigned int rl_get_shader_id_default_()
{
	return rlGetShaderIdDefault();
}
int *rl_get_shader_locs_default_()
{
	return rlGetShaderLocsDefault();
}
rlRenderBatch rl_load_render_batch_(int *numBuffers, int *bufferElements)
{
	return rlLoadRenderBatch(*numBuffers, *bufferElements);
}
void rl_unload_render_batch_(rlRenderBatch *batch)
{
	return rlUnloadRenderBatch(*batch);
}
void rl_draw_render_batch_(rlRenderBatch *batch)
{
	return rlDrawRenderBatch(batch);
}
void rl_set_render_batch_active_(rlRenderBatch *batch)
{
	return rlSetRenderBatchActive(batch);
}
void rl_draw_render_batch_active_()
{
	return rlDrawRenderBatchActive();
}
_Bool rl_check_render_batch_limit_(int *vCount)
{
	return rlCheckRenderBatchLimit(*vCount);
}
void rl_set_texture_(unsigned int *id)
{
	return rlSetTexture(*id);
}
unsigned int rl_load_vertex_array_()
{
	return rlLoadVertexArray();
}
unsigned int rl_load_vertex_buffer_(const void *buffer, int *size, _Bool *dynamic)
{
	return rlLoadVertexBuffer(buffer, *size, *dynamic);
}
unsigned int rl_load_vertex_buffer_element_(const void *buffer, int *size, _Bool *dynamic)
{
	return rlLoadVertexBufferElement(buffer, *size, *dynamic);
}
void rl_update_vertex_buffer_(unsigned int *bufferId, const void *data, int *dataSize, int *offset)
{
	return rlUpdateVertexBuffer(*bufferId, data, *dataSize, *offset);
}
void rl_update_vertex_buffer_elements_(unsigned int *id, const void *data, int *dataSize, int *offset)
{
	return rlUpdateVertexBufferElements(*id, data, *dataSize, *offset);
}
void rl_unload_vertex_array_(unsigned int *vaoId)
{
	return rlUnloadVertexArray(*vaoId);
}
void rl_unload_vertex_buffer_(unsigned int *vboId)
{
	return rlUnloadVertexBuffer(*vboId);
}
void rl_set_vertex_attribute_(unsigned int *index, int *compSize, int *type, _Bool *normalized, int *stride, const void *pointer)
{
	return rlSetVertexAttribute(*index, *compSize, *type, *normalized, *stride, pointer);
}
void rl_set_vertex_attribute_divisor_(unsigned int *index, int *divisor)
{
	return rlSetVertexAttributeDivisor(*index, *divisor);
}
void rl_set_vertex_attribute_default_(int *locIndex, const void *value, int *attribType, int *count)
{
	return rlSetVertexAttributeDefault(*locIndex, value, *attribType, *count);
}
void rl_draw_vertex_array_(int *offset, int *count)
{
	return rlDrawVertexArray(*offset, *count);
}
void rl_draw_vertex_array_elements_(int *offset, int *count, const void *buffer)
{
	return rlDrawVertexArrayElements(*offset, *count, buffer);
}
void rl_draw_vertex_array_instanced_(int *offset, int *count, int *instances)
{
	return rlDrawVertexArrayInstanced(*offset, *count, *instances);
}
void rl_draw_vertex_array_elements_instanced_(int *offset, int *count, const void *buffer, int *instances)
{
	return rlDrawVertexArrayElementsInstanced(*offset, *count, buffer, *instances);
}
unsigned int rl_load_texture_(const void *data, int *width, int *height, int *format, int *mipmapCount)
{
	return rlLoadTexture(data, *width, *height, *format, *mipmapCount);
}
unsigned int rl_load_texture_depth_(int *width, int *height, _Bool *useRenderBuffer)
{
	return rlLoadTextureDepth(*width, *height, *useRenderBuffer);
}
unsigned int rl_load_texture_cubemap_(const void *data, int *size, int *format)
{
	return rlLoadTextureCubemap(data, *size, *format);
}
void rl_update_texture_(unsigned int *id, int *offsetX, int *offsetY, int *width, int *height, int *format, const void *data)
{
	return rlUpdateTexture(*id, *offsetX, *offsetY, *width, *height, *format, data);
}
void rl_get_gl_texture_formats_(int *format, unsigned int *glInternalFormat, unsigned int *glFormat, unsigned int *glType)
{
	return rlGetGlTextureFormats(*format, glInternalFormat, glFormat, glType);
}
const char *rl_get_pixel_format_name_(unsigned int *format)
{
	return rlGetPixelFormatName(*format);
}
void rl_unload_texture_(unsigned int *id)
{
	return rlUnloadTexture(*id);
}
void rl_gen_texture_mipmaps_(unsigned int *id, int *width, int *height, int *format, int *mipmaps)
{
	return rlGenTextureMipmaps(*id, *width, *height, *format, mipmaps);
}
void *rl_read_texture_pixels_(unsigned int *id, int *width, int *height, int *format)
{
	return rlReadTexturePixels(*id, *width, *height, *format);
}
unsigned char *rl_read_screen_pixels_(int *width, int *height)
{
	return rlReadScreenPixels(*width, *height);
}
unsigned int rl_load_framebuffer_(int *width, int *height)
{
	return rlLoadFramebuffer(width, height);
}
void rl_framebuffer_attach_(unsigned int *fboId, unsigned int *texId, int *attachType, int *texType, int *mipLevel)
{
	return rlFramebufferAttach(*fboId, *texId, *attachType, *texType, *mipLevel);
}
_Bool rl_framebuffer_complete_(unsigned int *id)
{
	return rlFramebufferComplete(*id);
}
void rl_unload_framebuffer_(unsigned int *id)
{
	return rlUnloadFramebuffer(*id);
}
unsigned int rl_load_shader_code_(const char *vsCode, const char *fsCode)
{
	return rlLoadShaderCode(vsCode, fsCode);
}
unsigned int rl_compile_shader_(const char *shaderCode, int *type)
{
	return rlCompileShader(shaderCode, *type);
}
unsigned int rl_load_shader_program_(unsigned int *vShaderId, unsigned int *fShaderId)
{
	return rlLoadShaderProgram(*vShaderId, *fShaderId);
}
void rl_unload_shader_program_(unsigned int *id)
{
	return rlUnloadShaderProgram(*id);
}
int rl_get_location_uniform_(unsigned int *shaderId, const char *uniformName)
{
	return rlGetLocationUniform(*shaderId, uniformName);
}
int rl_get_location_attrib_(unsigned int *shaderId, const char *attribName)
{
	return rlGetLocationAttrib(*shaderId, attribName);
}
void rl_set_uniform_(int *locIndex, const void *value, int *uniformType, int *count)
{
	return rlSetUniform(*locIndex, value, *uniformType, *count);
}
void rl_set_uniform_matrix_(int *locIndex, Matrix *mat)
{
	return rlSetUniformMatrix(*locIndex, *mat);
}
void rl_set_uniform_sampler_(int *locIndex, unsigned int *textureId)
{
	return rlSetUniformSampler(*locIndex, *textureId);
}
void rl_set_shader_(unsigned int *id, int *locs)
{
	return rlSetShader(*id, locs);
}
unsigned int rl_load_compute_shader_program_(unsigned int *shaderId)
{
	return rlLoadComputeShaderProgram(*shaderId);
}
void rl_compute_shader_dispatch_(unsigned int *groupX, unsigned int *groupY, unsigned int *groupZ)
{
	return rlComputeShaderDispatch(*groupX, *groupY, *groupZ);
}
unsigned int rl_load_shader_buffer_(unsigned int *size, const void *data, int *usageHint)
{
	return rlLoadShaderBuffer(*size, data, *usageHint);
}
void rl_unload_shader_buffer_(unsigned int *ssboId)
{
	return rlUnloadShaderBuffer(*ssboId);
}
void rl_update_shader_buffer_(unsigned int *id, const void *data, unsigned int *dataSize, unsigned int *offset)
{
	return rlUpdateShaderBuffer(*id, data, *dataSize, *offset);
}
void rl_bind_shader_buffer_(unsigned int *id, unsigned int *index)
{
	return rlBindShaderBuffer(*id, *index);
}
void rl_read_shader_buffer_(unsigned int *id, void *dest, unsigned int *count, unsigned int *offset)
{
	return rlReadShaderBuffer(*id, dest, *count, *offset);
}
void rl_copy_shader_buffer_(unsigned int *destId, unsigned int *srcId, unsigned int *destOffset, unsigned int *srcOffset, unsigned int *count)
{
	return rlCopyShaderBuffer(*destId, *srcId, *destOffset, *srcOffset, *count);
}
unsigned int rl_get_shader_buffer_size_(unsigned int *id)
{
	return rlGetShaderBufferSize(*id);
}
void rl_bind_image_texture_(unsigned int *id, unsigned int *index, int *format, _Bool *readonly)
{
	return rlBindImageTexture(*id, *index, *format, *readonly);
}
Matrix rl_get_matrix_modelview_()
{
	return rlGetMatrixModelview();
}
Matrix rl_get_matrix_projection_()
{
	return rlGetMatrixProjection();
}
Matrix rl_get_matrix_transform_()
{
	return rlGetMatrixTransform();
}
Matrix rl_get_matrix_projection_stereo_(int *eye)
{
	return rlGetMatrixProjectionStereo(*eye);
}
Matrix rl_get_matrix_view_offset_stereo_(int *eye)
{
	return rlGetMatrixViewOffsetStereo(*eye);
}
void rl_set_matrix_projection_(Matrix *proj)
{
	return rlSetMatrixProjection(*proj);
}
void rl_set_matrix_modelview_(Matrix *view)
{
	return rlSetMatrixModelview(*view);
}
void rl_set_matrix_projection_stereo_(Matrix *right, Matrix *left)
{
	return rlSetMatrixProjectionStereo(*right, *left);
}
void rl_set_matrix_view_offset_stereo_(Matrix *right, Matrix *left)
{
	return rlSetMatrixViewOffsetStereo(*right, *left);
}
void rl_load_draw_cube_()
{
	return rlLoadDrawCube();
}
void rl_load_draw_quad_()
{
	return rlLoadDrawQuad();
}
#include <rgestures.h>
#include <raymath.h>
inline float clamp_(float *value, float *min, float *max)
{
	return Clamp(*value, *min, *max);
}
inline float lerp_(float *start, float *end, float *amount)
{
	return Lerp(*start, *end, *amount);
}
inline float normalize_(float *value, float *start, float *end)
{
	return Normalize(*value, *start, *end);
}
inline float remap_(float *value, float *inputStart, float *inputEnd, float *outputStart, float *outputEnd)
{
	return Remap(*value, *inputStart, *inputEnd, *outputStart, *outputEnd);
}
inline float wrap_(float *value, float *min, float *max)
{
	return Wrap(*value, *min, *max);
}
inline int float_equals_(float *x, float *y)
{
	return FloatEquals(*x, *y);
}
inline Vector2 vector2_zero_()
{
	return Vector2Zero();
}
inline Vector2 vector2_one_()
{
	return Vector2One();
}
inline Vector2 vector2_add_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Add(*v1, *v2);
}
inline Vector2 vector2_add_value_(Vector2 *v, float *add)
{
	return Vector2AddValue(*v, *add);
}
inline Vector2 vector2_subtract_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Subtract(*v1, *v2);
}
inline Vector2 vector2_subtract_value_(Vector2 *v, float *sub)
{
	return Vector2SubtractValue(*v, *sub);
}
inline float vector2_length_(Vector2 *v)
{
	return Vector2Length(*v);
}
inline float vector2_length_sqr_(Vector2 *v)
{
	return Vector2LengthSqr(*v);
}
inline float vector2_dot_product_(Vector2 *v1, Vector2 *v2)
{
	return Vector2DotProduct(*v1, *v2);
}
inline float vector2_distance_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Distance(*v1, *v2);
}
inline float vector2_distance_sqr_(Vector2 *v1, Vector2 *v2)
{
	return Vector2DistanceSqr(*v1, *v2);
}
inline float vector2_angle_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Angle(*v1, *v2);
}
inline float vector2_line_angle_(Vector2 *start, Vector2 *end)
{
	return Vector2LineAngle(*start, *end);
}
inline Vector2 vector2_scale_(Vector2 *v, float *scale)
{
	return Vector2Scale(*v, *scale);
}
inline Vector2 vector2_multiply_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Multiply(*v1, *v2);
}
inline Vector2 vector2_negate_(Vector2 *v)
{
	return Vector2Negate(*v);
}
inline Vector2 vector2_divide_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Divide(*v1, *v2);
}
inline Vector2 vector2_normalize_(Vector2 *v)
{
	return Vector2Normalize(*v);
}
inline Vector2 vector2_transform_(Vector2 *v, Matrix *mat)
{
	return Vector2Transform(*v, *mat);
}
inline Vector2 vector2_lerp_(Vector2 *v1, Vector2 *v2, float *amount)
{
	return Vector2Lerp(*v1, *v2, *amount);
}
inline Vector2 vector2_reflect_(Vector2 *v, Vector2 *normal)
{
	return Vector2Reflect(*v, *normal);
}
inline int vector2_min_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Min(*v1, *v2);
}
inline int vector2_max_(Vector2 *v1, Vector2 *v2)
{
	return Vector2Max(*v1, *v2);
}
inline Vector2 vector2_rotate_(Vector2 *v, float *angle)
{
	return Vector2Rotate(*v, *angle);
}
inline Vector2 vector2_move_towards_(Vector2 *v, Vector2 *target, float *maxDistance)
{
	return Vector2MoveTowards(*v, *target, *maxDistance);
}
inline Vector2 vector2_invert_(Vector2 *v)
{
	return Vector2Invert(*v);
}
inline Vector2 vector2_clamp_(Vector2 *v, Vector2 *min, Vector2 *max)
{
	return Vector2Clamp(*v, *min, *max);
}
inline Vector2 vector2_clamp_value_(Vector2 *v, float *min, float *max)
{
	return Vector2ClampValue(*v, *min, *max);
}
inline int vector2_equals_(Vector2 *p, Vector2 *q)
{
	return Vector2Equals(*p, *q);
}
inline int vector2_refract_(Vector2 *v, Vector2 *n, float *r)
{
	return Vector2Refract(*v, *n, *r);
}
inline Vector3 vector3_zero_()
{
	return Vector3Zero();
}
inline Vector3 vector3_one_()
{
	return Vector3One();
}
inline Vector3 vector3_add_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Add(*v1, *v2);
}
inline Vector3 vector3_add_value_(Vector3 *v, float *add)
{
	return Vector3AddValue(*v, *add);
}
inline Vector3 vector3_subtract_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Subtract(*v1, *v2);
}
inline Vector3 vector3_subtract_value_(Vector3 *v, float *sub)
{
	return Vector3SubtractValue(*v, *sub);
}
inline Vector3 vector3_scale_(Vector3 *v, float *scalar)
{
	return Vector3Scale(*v, *scalar);
}
inline Vector3 vector3_multiply_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Multiply(*v1, *v2);
}
inline Vector3 vector3_cross_product_(Vector3 *v1, Vector3 *v2)
{
	return Vector3CrossProduct(*v1, *v2);
}
inline Vector3 vector3_perpendicular_(Vector3 *v)
{
	return Vector3Perpendicular(*v);
}
inline float vector3_length_(const Vector3 *v)
{
	return Vector3Length(*v);
}
inline float vector3_length_sqr_(const Vector3 *v)
{
	return Vector3LengthSqr(*v);
}
inline float vector3_dot_product_(Vector3 *v1, Vector3 *v2)
{
	return Vector3DotProduct(*v1, *v2);
}
inline float vector3_distance_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Distance(*v1, *v2);
}
inline float vector3_distance_sqr_(Vector3 *v1, Vector3 *v2)
{
	return Vector3DistanceSqr(*v1, *v2);
}
inline float vector3_angle_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Angle(*v1, *v2);
}
inline Vector3 vector3_negate_(Vector3 *v)
{
	return Vector3Negate(*v);
}
inline Vector3 vector3_divide_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Divide(*v1, *v2);
}
inline Vector3 vector3_normalize_(Vector3 *v)
{
	return Vector3Normalize(*v);
}
inline Vector3 vector3_project_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Project(*v1, *v2);
}
inline Vector3 vector3_reject_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Reject(*v1, *v2);
}
inline void vector3_ortho_normalize_(Vector3 *v1, Vector3 *v2)
{
	return Vector3OrthoNormalize(v1, v2);
}
inline Vector3 vector3_transform_(Vector3 *v, Matrix *mat)
{
	return Vector3Transform(*v, *mat);
}
inline Vector3 vector3_rotate_by_quaternion_(Vector3 *v, Quaternion *q)
{
	return Vector3RotateByQuaternion(*v, *q);
}
inline Vector3 vector3_rotate_by_axis_angle_(Vector3 *v, Vector3 *axis, float *angle)
{
	return Vector3RotateByAxisAngle(*v, *axis, *angle);
}
inline int vector3_move_towards_(Vector3 *v, Vector3 *target, float *maxDistance)
{
	return Vector3MoveTowards(*v, *target, *maxDistance);
}
inline Vector3 vector3_lerp_(Vector3 *v1, Vector3 *v2, float *amount)
{
	return Vector3Lerp(*v1, *v2, *amount);
}
inline Vector3 vector3_reflect_(Vector3 *v, Vector3 *normal)
{
	return Vector3Reflect(*v, *normal);
}
inline Vector3 vector3_min_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Min(*v1, *v2);
}
inline Vector3 vector3_max_(Vector3 *v1, Vector3 *v2)
{
	return Vector3Max(*v1, *v2);
}
inline Vector3 vector3_barycenter_(Vector3 *p, Vector3 *a, Vector3 *b, Vector3 *c)
{
	return Vector3Barycenter(*p, *a, *b, *c);
}
inline Vector3 vector3_unproject_(Vector3 *source, Matrix *projection, Matrix *view)
{
	return Vector3Unproject(*source, *projection, *view);
}
inline float3 vector3_to_float_v_(Vector3 *v)
{
	return Vector3ToFloatV(*v);
}
inline Vector3 vector3_invert_(Vector3 *v)
{
	return Vector3Invert(*v);
}
inline Vector3 vector3_clamp_(Vector3 *v, Vector3 *min, Vector3 *max)
{
	return Vector3Clamp(*v, *min, *max);
}
inline Vector3 vector3_clamp_value_(Vector3 *v, float *min, float *max)
{
	return Vector3ClampValue(*v, *min, *max);
}
inline int vector3_equals_(Vector3 *p, Vector3 *q)
{
	return Vector3Equals(*p, *q);
}
inline Vector3 vector3_refract_(Vector3 *v, Vector3 *n, float *r)
{
	return Vector3Refract(*v, *n, *r);
}
inline int vector4_zero_()
{
	return Vector4Zero();
}
inline int vector4_one_()
{
	return Vector4One();
}
inline int vector4_add_(Vector4 *v1, Vector4 *v2)
{
	return Vector4Add(*v1, *v2);
}
inline int vector4_add_value_(Vector4 *v, float *add)
{
	return Vector4AddValue(*v, *add);
}
inline int vector4_subtract_(Vector4 *v1, Vector4 *v2)
{
	return Vector4Subtract(*v1, *v2);
}
inline int vector4_subtract_value_(Vector4 *v, float *add)
{
	return Vector4SubtractValue(*v, *add);
}
inline float vector4_length_(Vector4 *v)
{
	return Vector4Length(*v);
}
inline float vector4_length_sqr_(Vector4 *v)
{
	return Vector4LengthSqr(*v);
}
inline float vector4_dot_product_(Vector4 *v1, Vector4 *v2)
{
	return Vector4DotProduct(*v1, *v2);
}
inline float vector4_distance_(Vector4 *v1, Vector4 *v2)
{
	return Vector4Distance(*v1, *v2);
}
inline float vector4_distance_sqr_(Vector4 *v1, Vector4 *v2)
{
	return Vector4DistanceSqr(*v1, *v2);
}
inline int vector4_scale_(Vector4 *v, float *scale)
{
	return Vector4Scale(*v, *scale);
}
inline int vector4_multiply_(Vector4 *v1, Vector4 *v2)
{
	return Vector4Multiply(*v1, *v2);
}
inline int vector4_negate_(Vector4 *v)
{
	return Vector4Negate(*v);
}
inline int vector4_divide_(Vector4 *v1, Vector4 *v2)
{
	return Vector4Divide(*v1, *v2);
}
inline int vector4_normalize_(Vector4 *v)
{
	return Vector4Normalize(*v);
}
inline int vector4_min_(Vector4 *v1, Vector4 *v2)
{
	return Vector4Min(*v1, *v2);
}
inline int vector4_max_(Vector4 *v1, Vector4 *v2)
{
	return Vector4Max(*v1, *v2);
}
inline int vector4_lerp_(Vector4 *v1, Vector4 *v2, float *amount)
{
	return Vector4Lerp(*v1, *v2, *amount);
}
inline int vector4_move_towards_(Vector4 *v, Vector4 *target, float *maxDistance)
{
	return Vector4MoveTowards(*v, *target, *maxDistance);
}
inline int vector4_invert_(Vector4 *v)
{
	return Vector4Invert(*v);
}
inline int vector4_equals_(Vector4 *p, Vector4 *q)
{
	return Vector4Equals(*p, *q);
}
inline float matrix_determinant_(Matrix *mat)
{
	return MatrixDeterminant(*mat);
}
inline float matrix_trace_(Matrix *mat)
{
	return MatrixTrace(*mat);
}
inline Matrix matrix_transpose_(Matrix *mat)
{
	return MatrixTranspose(*mat);
}
inline Matrix matrix_invert_(Matrix *mat)
{
	return MatrixInvert(*mat);
}
inline Matrix matrix_identity_()
{
	return MatrixIdentity();
}
inline Matrix matrix_add_(Matrix *left, Matrix *right)
{
	return MatrixAdd(*left, *right);
}
inline Matrix matrix_subtract_(Matrix *left, Matrix *right)
{
	return MatrixSubtract(*left, *right);
}
inline Matrix matrix_multiply_(Matrix *left, Matrix *right)
{
	return MatrixMultiply(*left, *right);
}
inline Matrix matrix_translate_(float *x, float *y, float *z)
{
	return MatrixTranslate(*x, *y, *z);
}
inline Matrix matrix_rotate_(Vector3 *axis, float *angle)
{
	return MatrixRotate(*axis, *angle);
}
inline Matrix matrix_rotate_x_(float *angle)
{
	return MatrixRotateX(*angle);
}
inline Matrix matrix_rotate_y_(float *angle)
{
	return MatrixRotateY(*angle);
}
inline Matrix matrix_rotate_z_(float *angle)
{
	return MatrixRotateZ(*angle);
}
inline Matrix matrix_rotate_x_y_z_(Vector3 *angle)
{
	return MatrixRotateXYZ(*angle);
}
inline Matrix matrix_rotate_z_y_x_(Vector3 *angle)
{
	return MatrixRotateZYX(*angle);
}
inline Matrix matrix_scale_(float *x, float *y, float *z)
{
	return MatrixScale(*x, *y, *z);
}
inline Matrix matrix_frustum_(double *left, double *right, double *bottom, double *top, double *near, double *far)
{
	return MatrixFrustum(*left, *right, *bottom, *top, *near, *far);
}
inline Matrix matrix_perspective_(double *fovY, double *aspect, double *nearPlane, double *farPlane)
{
	return MatrixPerspective(*fovY, *aspect, *nearPlane, *farPlane);
}
inline Matrix matrix_ortho_(double *left, double *right, double *bottom, double *top, double *nearPlane, double *farPlane)
{
	return MatrixOrtho(*left, *right, *bottom, *top, *nearPlane, *farPlane);
}
inline Matrix matrix_look_at_(Vector3 *eye, Vector3 *target, Vector3 *up)
{
	return MatrixLookAt(*eye, *target, *up);
}
inline float16 matrix_to_float_v_(Matrix *mat)
{
	return MatrixToFloatV(*mat);
}
inline Quaternion quaternion_add_(Quaternion *q1, Quaternion *q2)
{
	return QuaternionAdd(*q1, *q2);
}
inline Quaternion quaternion_add_value_(Quaternion *q, float *add)
{
	return QuaternionAddValue(*q, *add);
}
inline Quaternion quaternion_subtract_(Quaternion *q1, Quaternion *q2)
{
	return QuaternionSubtract(*q1, *q2);
}
inline Quaternion quaternion_subtract_value_(Quaternion *q, float *sub)
{
	return QuaternionSubtractValue(*q, *sub);
}
inline Quaternion quaternion_identity_()
{
	return QuaternionIdentity();
}
inline float quaternion_length_(Quaternion *q)
{
	return QuaternionLength(*q);
}
inline Quaternion quaternion_normalize_(Quaternion *q)
{
	return QuaternionNormalize(*q);
}
inline Quaternion quaternion_invert_(Quaternion *q)
{
	return QuaternionInvert(*q);
}
inline Quaternion quaternion_multiply_(Quaternion *q1, Quaternion *q2)
{
	return QuaternionMultiply(*q1, *q2);
}
inline Quaternion quaternion_scale_(Quaternion *q, float *mul)
{
	return QuaternionScale(*q, *mul);
}
inline Quaternion quaternion_divide_(Quaternion *q1, Quaternion *q2)
{
	return QuaternionDivide(*q1, *q2);
}
inline Quaternion quaternion_lerp_(Quaternion *q1, Quaternion *q2, float *amount)
{
	return QuaternionLerp(*q1, *q2, *amount);
}
inline Quaternion quaternion_nlerp_(Quaternion *q1, Quaternion *q2, float *amount)
{
	return QuaternionNlerp(*q1, *q2, *amount);
}
inline Quaternion quaternion_slerp_(Quaternion *q1, Quaternion *q2, float *amount)
{
	return QuaternionSlerp(*q1, *q2, *amount);
}
inline Quaternion quaternion_from_vector3_to_vector3_(Vector3 *from, Vector3 *to)
{
	return QuaternionFromVector3ToVector3(*from, *to);
}
inline Quaternion quaternion_from_matrix_(Matrix *mat)
{
	return QuaternionFromMatrix(*mat);
}
inline Matrix quaternion_to_matrix_(Quaternion *q)
{
	return QuaternionToMatrix(*q);
}
inline Quaternion quaternion_from_axis_angle_(Vector3 *axis, float *angle)
{
	return QuaternionFromAxisAngle(*axis, *angle);
}
inline void quaternion_to_axis_angle_(Quaternion *q, Vector3 *outAxis, float *outAngle)
{
	return QuaternionToAxisAngle(*q, outAxis, outAngle);
}
inline Quaternion quaternion_from_euler_(float *pitch, float *yaw, float *roll)
{
	return QuaternionFromEuler(*pitch, *yaw, *roll);
}
inline Vector3 quaternion_to_euler_(Quaternion *q)
{
	return QuaternionToEuler(*q);
}
inline Quaternion quaternion_transform_(Quaternion *q, Matrix *mat)
{
	return QuaternionTransform(*q, *mat);
}
inline int quaternion_equals_(Quaternion *p, Quaternion *q)
{
	return QuaternionEquals(*p, *q);
}
