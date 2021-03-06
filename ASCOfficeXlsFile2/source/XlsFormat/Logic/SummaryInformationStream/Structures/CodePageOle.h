﻿/*
 * (c) Copyright Ascensio System SIA 2010-2017
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */
#pragma once
#include "Property.h"

#include <Binary/BinSmartPointers.h>

namespace OLEPS
{

class PropertyCodePage : public Property
{
public:
    PropertyCodePage(const unsigned short value_type, XLS::CFStreamPtr stream);
	
	static const unsigned int Type = 0x0001;
	static const unsigned short DefaultCodePage = 1250;

	unsigned short code_page;
};
typedef boost::shared_ptr<PropertyCodePage> PropertyCodePagePtr;
//-----------------------------------------------------------------------------------------
class PropertyTitle : public Property
{
public:
    PropertyTitle(const unsigned short value_type, XLS::CFStreamPtr stream);
	
	static const unsigned int Type = 0x0002;

	std::wstring title;
};
typedef boost::shared_ptr<PropertyTitle> PropertyTitlePtr;
//-----------------------------------------------------------------------------------------
class PropertySubject : public Property
{
public:
    PropertySubject(const unsigned short value_type, XLS::CFStreamPtr stream);
	
	static const unsigned int Type = 0x0003;

	std::wstring subject;
};
typedef boost::shared_ptr<PropertySubject> PropertySubjectPtr;
//-----------------------------------------------------------------------------------------
class PropertyAuthor : public Property
{
public:
    PropertyAuthor(const unsigned short value_type, XLS::CFStreamPtr stream);
	static const unsigned int Type = 0x0004;
	std::wstring author;
};
typedef boost::shared_ptr<PropertyAuthor> PropertyAuthorPtr;
//-----------------------------------------------------------------------------------------
class PropertyKeywords : public Property
{
public:
    PropertyKeywords(const unsigned short value_type, XLS::CFStreamPtr stream);
	static const unsigned int Type = 0x0005;
	std::wstring keywords;
};
typedef boost::shared_ptr<PropertyKeywords> PropertyKeywordsPtr;
//-----------------------------------------------------------------------------------------
class PropertyComments : public Property
{
public:
    PropertyComments(const unsigned short value_type, XLS::CFStreamPtr stream);
	static const unsigned int Type = 0x0006;
	std::wstring comments;
};
typedef boost::shared_ptr<PropertyComments> PropertyCommentsPtr;
//-----------------------------------------------------------------------------------------
class PropertyDateCreate : public Property
{
public:
    PropertyDateCreate(const unsigned short value_type, XLS::CFStreamPtr stream);
	static const unsigned int Type = 0x000c;
	std::wstring dateCreate;
};
typedef boost::shared_ptr<PropertyDateCreate> PropertyDateCreatesPtr;
} // namespace OLEPS
