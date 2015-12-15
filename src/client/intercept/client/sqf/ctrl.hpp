#pragma once
#include "shared.hpp"
#include "client\client.hpp"
#include "shared\client_types.hpp"

using namespace intercept::types;

namespace intercept {
	namespace sqf {
		namespace ctrl {
			void ctrl_activate(control value_);
			float ctrl_auto_scroll_delay(control value_);
			bool ctrl_auto_scroll_rewind(control value_);
			float ctrl_auto_scroll_speed(control value_);
			bool ctrl_checked(control value_);
			std::string ctrl_class_name(control value_);
			bool ctrl_committed(control value_);
			bool ctrl_delete(control value_);
			bool ctrl_enabled(control value_);
			bool ctrl_enabled(float value_);
			float ctrl_fade(control value_);
			bool ctrl_htmlloaded(control value_);
			float ctrl_idc(control value_);
			float ctrl_idd(display value_);
			void ctrl_map_anim_clear(control value_);
			void ctrl_map_anim_commit(control value_);
			bool ctrl_map_anim_done(control value_);
			float ctrl_map_scale(control value_);
			std::string ctrl_model(control value_);
			float ctrl_model_scale(control value_);
			display ctrl_parent(control value_);
			control ctrl_parent_controls_group(control value_);
			float ctrl_scale(control value_);
			void ctrl_set_focus(control value_);
			bool ctrl_shown(control value_);
			std::string ctrl_text(control value_);
			std::string ctrl_text(float value_);
			float ctrl_text_height(control value_);
			std::string ctrl_text_secondary(control value_);
			float ctrl_type(control value_);
			bool ctrl_visible(float value_);

			void ctrl_commit(control value0_, float value1_);
			void ctrl_enable(control value0_, bool value1_);
			void ctrl_remove_all_event_handlers(control value0_, const std::string& value1_);
			void ctrl_set_auto_scroll_delay(control value0_, float value1_);
			void ctrl_set_auto_scroll_rewind(control value0_, bool value1_);
			void ctrl_set_auto_scroll_speed(control value0_, float value1_);
			void ctrl_set_checked(control value0_, bool value1_);
			void ctrl_set_fade(control value0_, float value1_);
			void ctrl_set_font(control value0_, const std::string& value1_);
			void ctrl_set_font_h1(control value0_, const std::string& value1_);
			void ctrl_set_font_h1b(control value0_, const std::string& value1_);
			void ctrl_set_font_h2(control value0_, const std::string& value1_);
			void ctrl_set_font_h2b(control value0_, const std::string& value1_);
			void ctrl_set_font_h3(control value0_, const std::string& value1_);
			void ctrl_set_font_h3b(control value0_, const std::string& value1_);
			void ctrl_set_font_h4(control value0_, const std::string& value1_);
			void ctrl_set_font_h4b(control value0_, const std::string& value1_);
			void ctrl_set_font_h5(control value0_, const std::string& value1_);
			void ctrl_set_font_h5b(control value0_, const std::string& value1_);
			void ctrl_set_font_h6(control value0_, const std::string& value1_);
			void ctrl_set_font_h6b(control value0_, const std::string& value1_);
			void ctrl_set_font_height(control value0_, float value1_);
			void ctrl_set_font_height_h1(control value0_, float value1_);
			void ctrl_set_font_height_h2(control value0_, float value1_);
			void ctrl_set_font_height_h3(control value0_, float value1_);
			void ctrl_set_font_height_h4(control value0_, float value1_);
			void ctrl_set_font_height_h5(control value0_, float value1_);
			void ctrl_set_font_height_h6(control value0_, float value1_);
			void ctrl_set_font_height_secondary(control value0_, float value1_);
			void ctrl_set_font_p(control value0_, const std::string& value1_);
			void ctrl_set_font_p(control value0_, float value1_);
			void ctrl_set_font_pb(control value0_, const std::string& value1_);
			void ctrl_set_font_secondary(control value0_, const std::string& value1_);
			void ctrl_set_model(control value0_, const std::string& value1_);
			void ctrl_set_model_scale(control value0_, float value1_);
			void ctrl_set_scale(control value0_, float value1_);
			void ctrl_set_structured_text(control value0_, const std::string& value1_);
			void ctrl_set_text(control value0_, const std::string& value1_);
			void ctrl_set_text_secondary(control value0_, const std::string& value1_);
			void ctrl_set_tooltip(control value0_, const std::string& value1_);
			void ctrl_show(control value0_, bool value1_);
		}
    }
}
