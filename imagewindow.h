#ifndef __IMAGE_WINDOW_H
#define __IMAGE_WINDOW_H

#define IMAGE_WINDOW_TYPE (image_window_get_type())

G_DECLARE_FINAL_TYPE( ImageWindow, image_window, 
	VIPSDISP, IMAGE_WINDOW, GtkApplicationWindow )

ImageWindow *image_window_new( VipsdispApp *app );
void image_window_open( ImageWindow *win, GFile *file );
double image_window_get_scale( ImageWindow *win );
TileSource *image_window_get_tilesource( ImageWindow *win );
void image_window_set_tile_source( ImageWindow *win, TileSource *tile_source );
void image_window_get_last( ImageWindow *win, double *last_x, double *last_y );

#endif /* __IMAGE_WINDOW_H */

