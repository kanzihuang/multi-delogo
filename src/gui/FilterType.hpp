/*
 * Copyright (C) 2018 Werner Turing <werner.turing@protonmail.com>
 *
 * This file is part of multi-delogo.
 *
 * multi-delogo is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * multi-delogo is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with multi-delogo.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef MDL_FILTER_TYPE_H
#define MDL_FILTER_TYPE_H

#include <gtkmm.h>

#include "filter-generator/Filters.hpp"


namespace mdl {
  class FilterType : public Gtk::Grid
  {
  public:
    FilterType();

    void set(fg::FilterType type);
    fg::FilterType get() const;

    typedef sigc::signal<void, fg::FilterType> type_signal_type_changed;
    type_signal_type_changed signal_type_changed();

  private:
    Gtk::RadioButton rad_delogo_;
    Gtk::RadioButton rad_drawbox_;
    Gtk::RadioButton rad_none_;

    type_signal_type_changed signal_type_changed_;

    void on_radio_toggled(const Gtk::RadioButton& radio);
  };
}

#endif // MDL_FILTER_TYPE_H
