// include/linux/dma-heap-internal.h
#ifndef _LINUX_DMA_HEAP_INTERNAL_H
#define _LINUX_DMA_HEAP_INTERNAL_H

#include <linux/device.h>
#include <linux/module.h>
#include <linux/list.h>
#include <linux/dma-buf.h>

struct dma_heap {
	const char *name;
	struct dma_heap_export_info *priv;
	struct list_head list;
	struct device *heap_dev;
	struct dma_buf_ops *ops;
	struct module *owner;
};

#endif // _LINUX_DMA_HEAP_INTERNAL_H

