/*
  Copyright 2012-2020 David Robillard <d@drobilla.net>

  Permission to use, copy, modify, and/or distribute this software for any
  purpose with or without fee is hereby granted, provided that the above
  copyright notice and this permission notice appear in all copies.

  THIS SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

/**
   @file pugl.ipp
   @brief Pugl C++ API wrapper implementation.

   This file must be included exactly once in the application.
*/

#include "pugl/pugl.hpp"

namespace pugl {

Status
View::onCreate(const CreateEvent&)
{
	return Status::success;
}

Status
View::onDestroy(const DestroyEvent&)
{
	return Status::success;
}

Status
View::onConfigure(const ConfigureEvent&)
{
	return Status::success;
}

Status
View::onMap(const MapEvent&)
{
	return Status::success;
}

Status
View::onUnmap(const UnmapEvent&)
{
	return Status::success;
}

Status
View::onUpdate(const UpdateEvent&)
{
	return Status::success;
}

Status
View::onExpose(const ExposeEvent&)
{
	return Status::success;
}

Status
View::onClose(const CloseEvent&)
{
	return Status::success;
}

Status
View::onFocusIn(const FocusInEvent&)
{
	return Status::success;
}

Status
View::onFocusOut(const FocusOutEvent&)
{
	return Status::success;
}

Status
View::onKeyPress(const KeyPressEvent&)
{
	return Status::success;
}

Status
View::onKeyRelease(const KeyReleaseEvent&)
{
	return Status::success;
}

Status
View::onText(const TextEvent&)
{
	return Status::success;
}

Status
View::onPointerIn(const PointerInEvent&)
{
	return Status::success;
}

Status
View::onPointerOut(const PointerOutEvent&)
{
	return Status::success;
}

Status
View::onButtonPress(const ButtonPressEvent&)
{
	return Status::success;
}

Status
View::onButtonRelease(const ButtonReleaseEvent&)
{
	return Status::success;
}

Status
View::onMotion(const MotionEvent&)
{
	return Status::success;
}

Status
View::onScroll(const ScrollEvent&)
{
	return Status::success;
}

Status
View::onClient(const ClientEvent&)
{
	return Status::success;
}

Status
View::onTimer(const TimerEvent&)
{
	return Status::success;
}

Status
View::onLoopEnter(const LoopEnterEvent&)
{
	return Status::success;
}

Status
View::onLoopLeave(const LoopLeaveEvent&)
{
	return Status::success;
}

} // namespace pugl
