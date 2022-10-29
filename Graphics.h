const unsigned char bm_cable [] PROGMEM = {
   0x00, 0x00, 0x00, 0x1c, 0x00, 0x38, 0x07, 0xfc, 0x08, 0x38, 0x10, 0x1c, 0x10, 0x00, 0x08, 0x00, 
   0x07, 0xc0, 0x00, 0x20, 0x00, 0x10, 0x00, 0x10, 0x00, 0x20, 0x07, 0xc0, 0x08, 0x00, 0x10, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x80, 0x04, 0x43, 0x08, 0x46, 
   0xf1, 0x8f, 0x02, 0x16, 0x02, 0x23, 0x01, 0x20, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char bm_rf [] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0xc4, 
   0x4a, 0xaa, 0x4a, 0xce, 0x6e, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x07, 0xe0, 0x08, 0x10, 0x13, 0xc8, 0x04, 0x20, 0x01, 0x80, 0x00, 0x00, 0x4e, 0xc4, 
   0x4a, 0xaa, 0x4a, 0xce, 0x6e, 0xaa, 0x00, 0x00, 0x01, 0x80, 0x04, 0x20, 0x03, 0xc0, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0x4e, 
   0x31, 0x48, 0x61, 0xca, 0x74, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x07, 0xe0, 0x08, 0x10, 0x13, 0xc8, 0x04, 0x20, 0x01, 0x80, 0x00, 0x00, 0x71, 0x4e, 
   0x31, 0x48, 0x61, 0xca, 0x74, 0x4e, 0x00, 0x00, 0x01, 0x80, 0x04, 0x20, 0x03, 0xc0, 0x00, 0x00
};

const unsigned char bm_bt [] PROGMEM = {
   0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x11, 0x40, 0x00, 0x00, 0x05, 0x10, 0x00, 0x00, 0x01, 0x40, 
   0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x05, 0x10, 0x00, 0x00, 0x11, 0x40, 0x00, 0x00, 0x01, 0x00, 
   0x00, 0x00, 0x01, 0x00, 0x01, 0x80, 0x01, 0x40, 0x09, 0x20, 0x05, 0x10, 0x03, 0x20, 0x01, 0x40, 
   0x01, 0x80, 0x01, 0x40, 0x03, 0x20, 0x05, 0x10, 0x09, 0x20, 0x01, 0x40, 0x01, 0x80, 0x01, 0x00, 
   0x00, 0x00, 0x01, 0x00, 0x01, 0x80, 0x01, 0x40, 0x09, 0x20, 0x05, 0x10, 0x03, 0x20, 0x01, 0x40, 
   0x29, 0x94, 0x01, 0x40, 0x03, 0x20, 0x05, 0x10, 0x09, 0x20, 0x01, 0x40, 0x01, 0x80, 0x01, 0x00, 
   0x00, 0x00, 0x01, 0x00, 0x01, 0x80, 0x01, 0x40, 0x09, 0x20, 0x05, 0x10, 0x03, 0x20, 0x11, 0x48, 
   0x29, 0x94, 0x11, 0x48, 0x03, 0x20, 0x05, 0x10, 0x09, 0x20, 0x01, 0x40, 0x01, 0x80, 0x01, 0x00
};

static unsigned char bm_def[] PROGMEM = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb4, 0x61, 0x10, 0x8c, 0x23, 0xc4, 0x3f, 0xff, 
   0xb5, 0xa7, 0xb7, 0xb5, 0xed, 0xed, 0xbf, 0xff, 0xb5, 0xb9, 0xb4, 0xb4, 0x6d, 0xed, 0xbf, 0xff, 
   0x85, 0xa1, 0x10, 0xb4, 0x21, 0x44, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xce, 0x39, 0xfc, 0xff, 0x1f, 0xe0, 0x00, 
   0x3f, 0xef, 0x3b, 0xfe, 0xff, 0x3f, 0xe0, 0x00, 0x38, 0xef, 0xfb, 0x8e, 0xe7, 0xb8, 0x00, 0x00, 
   0x3f, 0xcf, 0xfb, 0x8e, 0xe3, 0xbe, 0x00, 0x00, 0x3f, 0xce, 0xfb, 0x8e, 0xe3, 0xbe, 0x00, 0x00, 
   0x38, 0xee, 0x7b, 0x8e, 0xe7, 0xb8, 0x00, 0x00, 0x38, 0xee, 0x3b, 0xfe, 0xff, 0x3f, 0xe0, 0x00, 
   0x38, 0xee, 0x39, 0xfc, 0xfe, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54, 
   0x2a, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x62, 0x24, 0x49, 0x22, 0x4e, 0x44, 
   0x00, 0x24, 0x93, 0x66, 0xc9, 0x32, 0x44, 0x28, 0x00, 0x20, 0x92, 0xa5, 0x49, 0x2a, 0x44, 0x10, 
   0x00, 0x24, 0x92, 0x24, 0x49, 0x26, 0x44, 0x10, 0x00, 0x18, 0x62, 0x24, 0x46, 0x22, 0x44, 0x10, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x1c, 0x9c, 0x44, 0x88, 0xc7, 0x1c, 0x00, 0x00, 0x10, 0x92, 0x6c, 0xa9, 0x24, 0x90, 
   0x00, 0x00, 0x1c, 0x9c, 0x54, 0xa9, 0xe7, 0x1c, 0x00, 0x00, 0x10, 0x94, 0x44, 0xa9, 0x25, 0x10, 
   0x00, 0x00, 0x10, 0x92, 0x44, 0x51, 0x24, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char bm_frame [] PROGMEM = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xf0, 0x40, 0x02, 0x0f, 0xff, 0xfc, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x1e, 0x40, 0x02, 0x78, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x3f, 0xff, 0xf2, 0x40, 0x02, 0x4f, 0xff, 0xfc, 
   0x00, 0x00, 0x02, 0x40, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x00, 0x00, 
   0x00, 0x00, 0x02, 0x40, 0x02, 0x40, 0x00, 0x00, 0x3f, 0xff, 0xf2, 0x40, 0x02, 0x4f, 0xff, 0xfc, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 0x20, 0x00, 0x12, 0x40, 0x02, 0x48, 0x00, 0x04, 
   0x20, 0x00, 0x1e, 0x40, 0x02, 0x78, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 
   0x20, 0x00, 0x10, 0x40, 0x02, 0x08, 0x00, 0x04, 0x3f, 0xff, 0xf0, 0x40, 0x02, 0x0f, 0xff, 0xfc, 
   0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x1c, 
   0x20, 0x00, 0x31, 0x20, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x31, 0x20, 0x00, 0x00, 0x00, 0x18, 
   0x20, 0x00, 0x31, 0x40, 0x00, 0x00, 0x00, 0x04, 0x20, 0x00, 0x20, 0xa0, 0x00, 0x00, 0x00, 0x38, 
   0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xaa, 0x8a, 0xaa, 0x80
};

const unsigned char bm_hwfail [] PROGMEM = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0xe3, 0x87, 0x0e, 0x73, 0x8e, 0x1c, 0x3f, 
   0xe4, 0xc9, 0x93, 0x26, 0x53, 0x26, 0x4c, 0xff, 0xe0, 0xc1, 0x87, 0x26, 0x53, 0x06, 0x1c, 0x3f, 
   0xe4, 0xc9, 0x87, 0x26, 0x03, 0x26, 0x1c, 0xff, 0xe4, 0xc9, 0x93, 0x0f, 0x27, 0x26, 0x4c, 0x3f, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xe1, 0xc7, 0x33, 0xc9, 0x87, 0x0f, 0xf9, 0xff, 0xe7, 0x93, 0x33, 0xc9, 0x93, 0x3f, 0xf6, 0xff, 
   0xe1, 0x83, 0x33, 0xc9, 0x87, 0x0f, 0xf6, 0xff, 0xe7, 0x93, 0x33, 0xc9, 0x87, 0x3f, 0xef, 0x7f, 
   0xe7, 0x93, 0x30, 0xe3, 0x93, 0x0f, 0xe9, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd9, 0xbf, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd9, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb9, 0xdf, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb9, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xef, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x79, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf9, 0xf7, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x0f, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char bm_hwok [] PROGMEM = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xf2, 0x71, 0xc3, 0x87, 0x39, 0xc7, 0x0e, 0x1f, 0xf2, 0x64, 0xc9, 0x93, 0x29, 0x93, 0x26, 0x7f, 
   0xf0, 0x60, 0xc3, 0x93, 0x29, 0x83, 0x0e, 0x1f, 0xf2, 0x64, 0xc3, 0x93, 0x01, 0x93, 0x0e, 0x7f, 
   0xf2, 0x64, 0xc9, 0x87, 0x93, 0x93, 0x26, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x33, 0x30, 0xff, 0x8e, 0x4f, 0xff, 
   0xff, 0xf3, 0x13, 0x39, 0xff, 0x26, 0x1f, 0xff, 0xff, 0xf3, 0x03, 0x39, 0xff, 0x26, 0x3f, 0xff, 
   0xff, 0xf3, 0x23, 0x39, 0xff, 0x26, 0x1f, 0xff, 0xff, 0xf3, 0x33, 0x39, 0xff, 0x8e, 0x4f, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xc3, 0x0e, 0x67, 0xf8, 0x70, 0xe3, 0x87, 0x33, 0xe7, 0x27, 0x0f, 0xf9, 0x33, 0xc9, 0x93, 0x87, 
   0xe7, 0x0f, 0x9f, 0xf8, 0x70, 0xc1, 0x93, 0xcf, 0xe7, 0x0f, 0x0f, 0xf8, 0x73, 0xc9, 0x93, 0xcf, 
   0xe7, 0x26, 0x67, 0xf9, 0x30, 0xc9, 0x87, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char bm_nfr [] PROGMEM = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xfc, 0x38, 0x66, 0x67, 0x1c, 0x3f, 0xff, 0xff, 0xfc, 0x99, 0xe6, 0x66, 0x4c, 0xff, 
   0xff, 0x9f, 0xfc, 0x98, 0x70, 0xe6, 0x7c, 0x3f, 0xff, 0x6f, 0xfc, 0x99, 0xf0, 0xe6, 0x4c, 0xff, 
   0xff, 0x6f, 0xfc, 0x38, 0x79, 0xe7, 0x1c, 0x3f, 0xfe, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xfe, 0x97, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x9b, 0xf3, 0x38, 0xe1, 0xe1, 0xc7, 0x0f, 
   0xfd, 0x9b, 0xf1, 0x32, 0x73, 0xe7, 0x93, 0x27, 0xfb, 0x9d, 0xf0, 0x32, 0x73, 0xe1, 0x93, 0x0f, 
   0xfb, 0x9d, 0xf2, 0x32, 0x73, 0xe7, 0x93, 0x0f, 0xf7, 0xfe, 0xf3, 0x38, 0xf3, 0xe7, 0xc7, 0x27, 
   0xf7, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0x9f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xef, 0xff, 0x7c, 0x38, 0x70, 0xe3, 0x9e, 0x1f, 0xf0, 0x00, 0xfc, 0x99, 0xe7, 0xc9, 0x9e, 0x7f, 
   0xff, 0xff, 0xfc, 0x38, 0x71, 0xc1, 0x9e, 0x1f, 0xff, 0xff, 0xfc, 0x39, 0xfc, 0xc9, 0x9e, 0x7f, 
   0xff, 0xff, 0xfc, 0x98, 0x61, 0xc9, 0x86, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char bm_online [] PROGMEM = {
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x1c, 0x66, 0x61, 0x8c, 0x24, 0x90, 0x87, 
   0xe6, 0x49, 0x22, 0x4f, 0x24, 0xe4, 0x93, 0x93, 0xe6, 0x18, 0x20, 0x63, 0x3c, 0x26, 0x30, 0x87, 
   0xe6, 0x19, 0x24, 0x79, 0x24, 0xe6, 0x33, 0x87, 0xe6, 0x49, 0x26, 0x43, 0x8c, 0x27, 0x70, 0x93, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xe6, 0x73, 0xe7, 0x33, 0x87, 0xff, 
   0xff, 0xe4, 0xe2, 0x73, 0xe7, 0x13, 0x9f, 0xff, 0xff, 0xe4, 0xe0, 0x73, 0xe7, 0x03, 0x87, 0xff, 
   0xff, 0xe4, 0xe4, 0x73, 0xe7, 0x23, 0x9f, 0xff, 0xff, 0xf1, 0xe6, 0x70, 0xe7, 0x33, 0x87, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
