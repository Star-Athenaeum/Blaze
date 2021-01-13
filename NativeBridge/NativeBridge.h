#pragma once

extern "C"
{
	//

	__declspec(dllexport) string __stdcall minify_css(string& content);
	__declspec(dllexport) string __stdcall minify_js(string& content);

	//

	__declspec(dllexport) void convert_video_to_webm(string& input_path, string& output_path, int& bitrate);

	//

	__declspec(dllexport) string __stdcall download_data(string& content);
	__declspec(dllexport) long long __stdcall get_download_length(string& link);
}