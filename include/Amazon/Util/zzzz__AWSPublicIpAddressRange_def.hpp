#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Util/zzzz__AWSPublicIpAddressRange_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AWSPublicIpAddressRange)
namespace Amazon::Util {
struct __AWSPublicIpAddressRange__AddressFormat;
}
// Forward declare root types
namespace Amazon::Util {
struct __AWSPublicIpAddressRange__AddressFormat;
}
namespace Amazon::Util {
class AWSPublicIpAddressRange;
}
// Write type traits
MARK_VAL_T(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat);
MARK_REF_PTR_T(::Amazon::Util::AWSPublicIpAddressRange);
// Type: ::AddressFormat
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: true
// CS Name: ::AWSPublicIpAddressRange::AddressFormat
struct CORDL_TYPE __AWSPublicIpAddressRange__AddressFormat {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AWSPublicIpAddressRange__AddressFormat_Unwrapped
  enum struct ____AWSPublicIpAddressRange__AddressFormat_Unwrapped : int32_t {
    __E_Ipv4 = static_cast<int32_t>(0x0),
    __E_Ipv6 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AWSPublicIpAddressRange__AddressFormat_Unwrapped() const noexcept {
    return static_cast<____AWSPublicIpAddressRange__AddressFormat_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSPublicIpAddressRange__AddressFormat();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AWSPublicIpAddressRange__AddressFormat(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Ipv4 value: static_cast<int32_t>(0x0)
  static ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat const Ipv4;

  /// @brief Field Ipv6 value: static_cast<int32_t>(0x1)
  static ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat const Ipv6;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::AWSPublicIpAddressRange
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::AWSPublicIpAddressRange*
class CORDL_TYPE AWSPublicIpAddressRange : public ::System::Object {
public:
  // Declarations
  using AddressFormat = ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat;

  __declspec(property(get = get_IpAddressFormat, put = set_IpAddressFormat))::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat IpAddressFormat;

  __declspec(property(get = get_IpPrefix, put = set_IpPrefix))::StringW IpPrefix;

  __declspec(property(get = get_NetworkBorderGroup, put = set_NetworkBorderGroup))::StringW NetworkBorderGroup;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_Service, put = set_Service))::StringW Service;

  /// @brief Field <IpAddressFormat>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__IpAddressFormat_k__BackingField,
                      put = __cordl_internal_set__IpAddressFormat_k__BackingField))::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat _IpAddressFormat_k__BackingField;

  /// @brief Field <IpPrefix>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__IpPrefix_k__BackingField, put = __cordl_internal_set__IpPrefix_k__BackingField))::StringW _IpPrefix_k__BackingField;

  /// @brief Field <NetworkBorderGroup>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__NetworkBorderGroup_k__BackingField, put = __cordl_internal_set__NetworkBorderGroup_k__BackingField))::StringW _NetworkBorderGroup_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::StringW _Region_k__BackingField;

  /// @brief Field <Service>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Service_k__BackingField, put = __cordl_internal_set__Service_k__BackingField))::StringW _Service_k__BackingField;

  static inline ::Amazon::Util::AWSPublicIpAddressRange* New_ctor();

  constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat const& __cordl_internal_get__IpAddressFormat_k__BackingField() const;

  constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat& __cordl_internal_get__IpAddressFormat_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__IpPrefix_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IpPrefix_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__NetworkBorderGroup_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__NetworkBorderGroup_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Region_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Service_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Service_k__BackingField();

  constexpr void __cordl_internal_set__IpAddressFormat_k__BackingField(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat value);

  constexpr void __cordl_internal_set__IpPrefix_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__NetworkBorderGroup_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Service_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x21fe39c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IpAddressFormat, addr 0x21fe3b4, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat get_IpAddressFormat();

  /// @brief Method get_IpPrefix, addr 0x21fe3a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_IpPrefix();

  /// @brief Method get_NetworkBorderGroup, addr 0x21fe3e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NetworkBorderGroup();

  /// @brief Method get_Region, addr 0x21fe3c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_Service, addr 0x21fe3d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Service();

  /// @brief Method set_IpAddressFormat, addr 0x21fe3bc, size 0x8, virtual false, abstract: false, final false
  inline void set_IpAddressFormat(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat value);

  /// @brief Method set_IpPrefix, addr 0x21fe3ac, size 0x8, virtual false, abstract: false, final false
  inline void set_IpPrefix(::StringW value);

  /// @brief Method set_NetworkBorderGroup, addr 0x21fe3ec, size 0x8, virtual false, abstract: false, final false
  inline void set_NetworkBorderGroup(::StringW value);

  /// @brief Method set_Region, addr 0x21fe3cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

  /// @brief Method set_Service, addr 0x21fe3dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Service(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSPublicIpAddressRange();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSPublicIpAddressRange", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSPublicIpAddressRange(AWSPublicIpAddressRange&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSPublicIpAddressRange", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSPublicIpAddressRange(AWSPublicIpAddressRange const&) = delete;

  /// @brief Field <IpPrefix>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____IpPrefix_k__BackingField;

  /// @brief Field <IpAddressFormat>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat ____IpAddressFormat_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____Region_k__BackingField;

  /// @brief Field <Service>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____Service_k__BackingField;

  /// @brief Field <NetworkBorderGroup>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____NetworkBorderGroup_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::AWSPublicIpAddressRange, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::AWSPublicIpAddressRange, ____IpPrefix_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::AWSPublicIpAddressRange, ____IpAddressFormat_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::AWSPublicIpAddressRange, ____Region_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::AWSPublicIpAddressRange, ____Service_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::AWSPublicIpAddressRange, ____NetworkBorderGroup_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Amazon::Util
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat, "Amazon.Util", "AWSPublicIpAddressRange/AddressFormat");
NEED_NO_BOX(::Amazon::Util::AWSPublicIpAddressRange);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::AWSPublicIpAddressRange*, "Amazon.Util", "AWSPublicIpAddressRange");
