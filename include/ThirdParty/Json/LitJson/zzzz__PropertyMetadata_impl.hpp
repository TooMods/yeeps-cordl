#pragma once
#include "ThirdParty/Json/LitJson/zzzz__PropertyMetadata_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "Info", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsField", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "Type", ty: "::System::Type*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::ThirdParty::Json::LitJson::PropertyMetadata::PropertyMetadata(::System::Reflection::MemberInfo* Info, bool IsField, ::System::Type* Type) noexcept {
  this->Info = Info;
  this->IsField = IsField;
  this->Type = Type;
}
// Ctor Parameters []
constexpr ::ThirdParty::Json::LitJson::PropertyMetadata::PropertyMetadata() {}
