//HEADER_GOES_HERE

//movie
extern int movie_cpp_init_value; // weak
extern char movie_playing; // weak
extern int loop_movie; // weak

void __cdecl movie_cpp_init();
void __fastcall play_movie(char *pszMovie, bool user_can_close);
LRESULT __stdcall MovieWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

/* data */

extern int movie_inf; // weak
