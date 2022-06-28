ImVec4 RGBAToDecimal(float R, float G, float B, float A) {
	return { R / 255, G / 255, B / 255, A / 255 };
}

ImVec4 DecimalToRGBA(float R, float G, float B, float A) {
	return { R * 255, G * 255, B * 255, A * 255 };
}
