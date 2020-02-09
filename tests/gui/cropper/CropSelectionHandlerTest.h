/*
 * Copyright (C) 2018 Damir Porobic <damir.porobic@gmx.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef KIMAGEANNOTATOR_CROPSELECTIONHANDLERTEST_H
#define KIMAGEANNOTATOR_CROPSELECTIONHANDLERTEST_H

#include <QtTest>

#include "src/gui/cropper/CropSelectionHandler.h"
#include "src/gui/annotator/AnnotationSettings.h"

using kImageAnnotator::CropSelectionHandler;
using kImageAnnotator::AnnotationArea;
using kImageAnnotator::Config;
using kImageAnnotator::AnnotationSettings;

class CropSelectionHandlerTest : public QObject
{
Q_OBJECT

private slots:
	void TestSetWidth_Should_EmitSelectionChangedSignal();
	void TestSetHeight_Should_EmitSelectionChangedSignal();
	void TestSetPositionX_Should_EmitSelectionChangedSignal();
	void TestSetPositionY_Should_EmitSelectionChangedSignal();
	void TestResetSelection_Should_SetSelectionToSceneRect();
	void TestIsInMotion_Should_ReturnTrue_WhenClickedOnSelection();
	void TestIsInMotion_Should_ReturnTrue_WhenClickedOnHandle();
	void TestIsInMotion_Should_ReturnFalse_WhenClickedOutsideSelectionAndHandle();
	void TestSelectionHandles_Should_ReturnEightItems();
};

#endif // KIMAGEANNOTATOR_CROPSELECTIONHANDLERTEST_H
