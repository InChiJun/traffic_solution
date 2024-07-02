/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/motor_screen/motorViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

motorViewBase::motorViewBase() :
    buttonCallback(this, &motorViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_BACKGROUNDS_480X272_GRADIENT_LIGHT_ID));
    add(background);

    back_main_btn.setXY(425, 5);
    back_main_btn.setBitmaps(touchgfx::Bitmap(BITMAP_BACK50_ID), touchgfx::Bitmap(BITMAP_BACK50_ID));
    back_main_btn.setAlpha(150);
    back_main_btn.setAction(buttonCallback);
    add(back_main_btn);

    air_btn.setXY(275, 28);
    air_btn.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_TEXT_ON_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_TEXT_ON_LIGHT_ID));
    add(air_btn);

    water_btn.setXY(275, 108);
    water_btn.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_TEXT_ON_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_TEXT_ON_LIGHT_ID));
    water_btn.setAction(buttonCallback);
    add(water_btn);

    led_btn.setXY(275, 188);
    led_btn.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_TEXT_ON_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUNDED_TEXT_ON_LIGHT_ID));
    led_btn.setAction(buttonCallback);
    add(led_btn);

    air_back.setXY(85, 25);
    air_back.setBitmap(touchgfx::Bitmap(BITMAP_BUTTON_RELEASED_ID));
    air_back.setAlpha(150);
    add(air_back);

    water_back.setXY(85, 105);
    water_back.setBitmap(touchgfx::Bitmap(BITMAP_BUTTON_RELEASED_ID));
    water_back.setAlpha(150);
    add(water_back);

    led_back.setXY(85, 185);
    led_back.setBitmap(touchgfx::Bitmap(BITMAP_BUTTON_RELEASED_ID));
    led_back.setAlpha(150);
    add(led_back);

    air_motor.setXY(108, 40);
    air_motor.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    air_motor.setLinespacing(0);
    air_motor.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VK8P));
    air_motor.setAlpha(150);
    add(air_motor);

    led.setXY(138, 202);
    led.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    led.setLinespacing(0);
    led.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3XZ2));
    led.setAlpha(150);
    add(led);

    water_motor.setXY(94, 121);
    water_motor.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    water_motor.setLinespacing(0);
    water_motor.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CHE4));
    water_motor.setAlpha(150);
    add(water_motor);
}

motorViewBase::~motorViewBase()
{

}

void motorViewBase::setupScreen()
{

}

void motorViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &back_main_btn)
    {
        //back_main
        //When back_main_btn clicked change screen to Main
        //Go to Main with no screen transition
        application().gotoMainScreenNoTransition();
    }
    if (&src == &water_btn)
    {
        //water_motor
        //When water_btn clicked call virtual function
        //Call function2
        function2();
    }
    if (&src == &led_btn)
    {
        //led
        //When led_btn clicked call virtual function
        //Call function3
        function3();
    }
}