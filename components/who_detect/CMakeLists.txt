set(include_dirs ".")

set(src_dirs ".")

set(requires who_frame_cap who_lcd_disp)

idf_component_register(SRC_DIRS ${src_dirs} INCLUDE_DIRS ${include_dirs} REQUIRES ${requires})