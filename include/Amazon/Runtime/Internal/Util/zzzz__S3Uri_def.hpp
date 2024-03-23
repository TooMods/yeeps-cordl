#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(S3Uri)
namespace Amazon {
class RegionEndpoint;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class S3Uri;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::S3Uri);
// Type: Amazon.Runtime.Internal.Util::S3Uri
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::S3Uri*
class CORDL_TYPE S3Uri : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Bucket, put = set_Bucket))::StringW Bucket;

  __declspec(property(get = get_IsPathStyle, put = set_IsPathStyle)) bool IsPathStyle;

  __declspec(property(get = get_Key, put = set_Key))::StringW Key;

  __declspec(property(get = get_Region, put = set_Region))::Amazon::RegionEndpoint* Region;

  /// @brief Field S3ControlExlusionRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S3ControlExlusionRegex, put = setStaticF_S3ControlExlusionRegex))::System::Text::RegularExpressions::Regex* S3ControlExlusionRegex;

  /// @brief Field S3EndpointRegex, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S3EndpointRegex, put = setStaticF_S3EndpointRegex))::System::Text::RegularExpressions::Regex* S3EndpointRegex;

  /// @brief Field <Bucket>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Bucket_k__BackingField, put = __cordl_internal_set__Bucket_k__BackingField))::StringW _Bucket_k__BackingField;

  /// @brief Field <IsPathStyle>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsPathStyle_k__BackingField, put = __cordl_internal_set__IsPathStyle_k__BackingField)) bool _IsPathStyle_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Key_k__BackingField, put = __cordl_internal_set__Key_k__BackingField))::StringW _Key_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::Amazon::RegionEndpoint* _Region_k__BackingField;

  /// @brief Method AppendDecoded, addr 0x244627c, size 0x148, virtual false, abstract: false, final false
  static inline void AppendDecoded(::System::Text::StringBuilder* builder, ::StringW s, int32_t index);

  /// @brief Method Decode, addr 0x2445f9c, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW Decode(::StringW s);

  /// @brief Method Decode, addr 0x2446130, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW Decode(::StringW s, int32_t firstPercent);

  /// @brief Method FromHex, addr 0x24463c4, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t c);

  /// @brief Method IsS3Uri, addr 0x2446044, size 0xec, virtual false, abstract: false, final false
  static inline bool IsS3Uri(::System::Uri* uri);

  static inline ::Amazon::Runtime::Internal::Util::S3Uri* New_ctor(::StringW uri);

  static inline ::Amazon::Runtime::Internal::Util::S3Uri* New_ctor(::System::Uri* uri);

  constexpr ::StringW const& __cordl_internal_get__Bucket_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Bucket_k__BackingField();

  constexpr bool const& __cordl_internal_get__IsPathStyle_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsPathStyle_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Key_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Key_k__BackingField();

  constexpr ::Amazon::RegionEndpoint*& __cordl_internal_get__Region_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::RegionEndpoint*> const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr void __cordl_internal_set__Bucket_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IsPathStyle_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Key_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::Amazon::RegionEndpoint* value);

  /// @brief Method .ctor, addr 0x24459fc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW uri);

  /// @brief Method .ctor, addr 0x2445a70, size 0x52c, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_S3ControlExlusionRegex();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_S3EndpointRegex();

  /// @brief Method get_Bucket, addr 0x24459cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Bucket();

  /// @brief Method get_IsPathStyle, addr 0x24459b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsPathStyle();

  /// @brief Method get_Key, addr 0x24459dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Key();

  /// @brief Method get_Region, addr 0x24459ec, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::RegionEndpoint* get_Region();

  static inline void setStaticF_S3ControlExlusionRegex(::System::Text::RegularExpressions::Regex* value);

  static inline void setStaticF_S3EndpointRegex(::System::Text::RegularExpressions::Regex* value);

  /// @brief Method set_Bucket, addr 0x24459d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Bucket(::StringW value);

  /// @brief Method set_IsPathStyle, addr 0x24459c0, size 0xc, virtual false, abstract: false, final false
  inline void set_IsPathStyle(bool value);

  /// @brief Method set_Key, addr 0x24459e4, size 0x8, virtual false, abstract: false, final false
  inline void set_Key(::StringW value);

  /// @brief Method set_Region, addr 0x24459f4, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::Amazon::RegionEndpoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr S3Uri();

public:
  // Ctor Parameters [CppParam { name: "", ty: "S3Uri", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  S3Uri(S3Uri&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "S3Uri", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  S3Uri(S3Uri const&) = delete;

  /// @brief Field <IsPathStyle>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsPathStyle_k__BackingField;

  /// @brief Field <Bucket>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Bucket_k__BackingField;

  /// @brief Field <Key>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Key_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::Amazon::RegionEndpoint* ____Region_k__BackingField;

  /// @brief Field S3ControlExlusionPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString S3ControlExlusionPattern{ u"^(.+\\.)?s3-control\\." };

  /// @brief Field S3EndpointPattern offset 0xffffffff size 0x8
  static constexpr ::ConstString S3EndpointPattern{ u"^(.+\\.)?s3[.-]([a-z0-9-]+)\\." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::S3Uri, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::S3Uri, ____IsPathStyle_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::S3Uri, ____Bucket_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::S3Uri, ____Key_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::S3Uri, ____Region_k__BackingField) == 0x28, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::S3Uri);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::S3Uri*, "Amazon.Runtime.Internal.Util", "S3Uri");
