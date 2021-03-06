/* FIXME
 * move this to include/linux/mod_devicetable.h when merging
 */

#ifndef __LINUX_GREYBUS_ID_H
#define __LINUX_GREYBUS_ID_H

#include <linux/types.h>
#include <linux/mod_devicetable.h>


struct greybus_interface_id {
	__u16	match_flags;
	__u16	vendor;
	__u16	product;
	__u64	unique_id;

	kernel_ulong_t	driver_info __aligned(sizeof(kernel_ulong_t));
};

/* Used to match the greybus_interface_id */
#define GREYBUS_ID_MATCH_VENDOR		BIT(0)
#define GREYBUS_ID_MATCH_PRODUCT	BIT(1)
#define GREYBUS_ID_MATCH_SERIAL		BIT(2)

#endif /* __LINUX_GREYBUS_ID_H */
