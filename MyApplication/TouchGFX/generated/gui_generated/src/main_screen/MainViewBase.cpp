/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    sliderValueChangedCallback(this, &MainViewBase::sliderValueChangedCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_480X272PX_ID));
    add(background);

    graphBackground.setPosition(15, 24, 389, 224);
    graphBackground.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    graphBackground.setBorderColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    graphBackground.setBorderSize(1);
    add(graphBackground);

    graph.setPosition(15, 24, 389, 224);
    graph.setScale(1);
    graph.setGraphRangeX(0, 100);
    graph.setGraphAreaMargin(10, 28, 19, 22);
    graph.setGraphAreaPadding(2, 6, 0, 6);
    graph.setGraphRangeY(0, 180);
    graphMajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    graphMajorYAxisGrid.setInterval(20);
    graphMajorYAxisGrid.setLineWidth(1);
    graphMajorYAxisGrid.setScale(1);
    graph.addGraphElement(graphMajorYAxisGrid);

    graphMajorXAxisLabel.setInterval(20);
    graphMajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_ODQ8));
    graphMajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    graphMajorXAxisLabel.setScale(1);
    graph.addBottomElement(graphMajorXAxisLabel);

    graphMajorYAxisLabel.setInterval(20);
    graphMajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_QBP0));
    graphMajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    graphMajorYAxisLabel.setScale(1);
    graph.addLeftElement(graphMajorYAxisLabel);

    graphLine1Painter.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    graphLine1.setPainter(graphLine1Painter);
    graphLine1.setLineWidth(2);
    graph.addGraphElement(graphLine1);


    add(graph);

    sliderResolution.setXY(424, 47);
    sliderResolution.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_BACK_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_ROUND_FILL_ID), touchgfx::Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_INDICATORS_SLIDER3_VERTICAL_ROUND_NOB_ID));
    sliderResolution.setupVerticalSlider(7, 3, 0, 0, 125);
    sliderResolution.setValueRange(20, 250);
    sliderResolution.setValue(180);
    sliderResolution.setNewValueCallback(sliderValueChangedCallback);
    add(sliderResolution);
}

MainViewBase::~MainViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::sliderValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &sliderResolution)
    {
        //SliderValueChanged
        //When sliderResolution value changed call virtual function
        //Call sliderValueChanged
        sliderValueChanged(value);
    }
}