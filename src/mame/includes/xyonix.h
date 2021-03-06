class xyonix_state : public driver_data_t
{
public:
	static driver_data_t *alloc(running_machine &machine) { return auto_alloc_clear(&machine, xyonix_state(machine)); }

	xyonix_state(running_machine &machine)
		: driver_data_t(machine) { }

	UINT8 *vidram;
	tilemap_t *tilemap;

	int e0_data;
	int credits;
	int coins;
	int prev_coin;
};


/*----------- defined in video/xyonix.c -----------*/

PALETTE_INIT( xyonix );
WRITE8_HANDLER( xyonix_vidram_w );
VIDEO_START(xyonix);
VIDEO_UPDATE(xyonix);
