#ifndef __GAC_X11CAIRO_GUI_POLYGON_ELEMENT_RENDERER_H
#define __GAC_X11CAIRO_GUI_POLYGON_ELEMENT_RENDERER_H

#include <GacUI.h>
#include "../X11CairoRenderTarget.h"


namespace vl
{
	namespace presentation
	{
		namespace elements_x11cairo
		{
			using namespace elements;
			class GuiPolygonElementRenderer: public Object, public IGuiGraphicsRenderer
			{
				DEFINE_GUI_GRAPHICS_RENDERER(GuiPolygonElement, GuiPolygonElementRenderer, IX11CairoRenderTarget);

			protected:
				cairo_t* cairoContext;

			public:
				GuiPolygonElementRenderer();

				void InitializeInternal();
				void FinalizeInternal();
				void Render(Rect bounds);
				void OnElementStateChanged();
				void RenderTargetChangedInternal(IX11CairoRenderTarget* oldRT, IX11CairoRenderTarget* newRT);
			};
		}
	}
}

#endif
