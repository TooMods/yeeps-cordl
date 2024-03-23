#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Util/zzzz__AWSPublicIpAddressRange_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AWSPublicIpAddressRanges)
namespace Amazon::Util {
class AWSPublicIpAddressRange;
}
namespace Amazon::Util {
struct __AWSPublicIpAddressRange__AddressFormat;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass25_0;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass26_0;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass27_0;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass31_0;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Net {
class IWebProxy;
}
namespace System {
struct DateTime;
}
namespace System {
class Uri;
}
namespace ThirdParty::Json::LitJson {
class JsonData;
}
// Forward declare root types
namespace Amazon::Util {
class AWSPublicIpAddressRanges;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass25_0;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass26_0;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass27_0;
}
namespace Amazon::Util {
class __AWSPublicIpAddressRanges____c__DisplayClass31_0;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::AWSPublicIpAddressRanges);
MARK_REF_PTR_T(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass25_0);
MARK_REF_PTR_T(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass26_0);
MARK_REF_PTR_T(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass27_0);
MARK_REF_PTR_T(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0);
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSPublicIpAddressRanges::<>c__DisplayClass25_0*
class CORDL_TYPE __AWSPublicIpAddressRanges____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field serviceKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serviceKey, put = __cordl_internal_set_serviceKey))::StringW serviceKey;

  static inline ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass25_0* New_ctor();

  /// @brief Method <AddressRangesByServiceKey>b__0, addr 0x21fe1f4, size 0x2c, virtual false, abstract: false, final false
  inline bool _AddressRangesByServiceKey_b__0(::Amazon::Util::AWSPublicIpAddressRange* ar);

  constexpr ::StringW const& __cordl_internal_get_serviceKey() const;

  constexpr ::StringW& __cordl_internal_get_serviceKey();

  constexpr void __cordl_internal_set_serviceKey(::StringW value);

  /// @brief Method .ctor, addr 0x21fd354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSPublicIpAddressRanges____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSPublicIpAddressRanges____c__DisplayClass25_0(__AWSPublicIpAddressRanges____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSPublicIpAddressRanges____c__DisplayClass25_0(__AWSPublicIpAddressRanges____c__DisplayClass25_0 const&) = delete;

  /// @brief Field serviceKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serviceKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass25_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass25_0, ___serviceKey) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass26_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSPublicIpAddressRanges::<>c__DisplayClass26_0*
class CORDL_TYPE __AWSPublicIpAddressRanges____c__DisplayClass26_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field regionIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_regionIdentifier, put = __cordl_internal_set_regionIdentifier))::StringW regionIdentifier;

  static inline ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass26_0* New_ctor();

  /// @brief Method <AddressRangesByRegion>b__0, addr 0x21fe220, size 0x2c, virtual false, abstract: false, final false
  inline bool _AddressRangesByRegion_b__0(::Amazon::Util::AWSPublicIpAddressRange* ar);

  constexpr ::StringW const& __cordl_internal_get_regionIdentifier() const;

  constexpr ::StringW& __cordl_internal_get_regionIdentifier();

  constexpr void __cordl_internal_set_regionIdentifier(::StringW value);

  /// @brief Method .ctor, addr 0x21fd4a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSPublicIpAddressRanges____c__DisplayClass26_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass26_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSPublicIpAddressRanges____c__DisplayClass26_0(__AWSPublicIpAddressRanges____c__DisplayClass26_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass26_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSPublicIpAddressRanges____c__DisplayClass26_0(__AWSPublicIpAddressRanges____c__DisplayClass26_0 const&) = delete;

  /// @brief Field regionIdentifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ___regionIdentifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass26_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass26_0, ___regionIdentifier) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass27_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSPublicIpAddressRanges::<>c__DisplayClass27_0*
class CORDL_TYPE __AWSPublicIpAddressRanges____c__DisplayClass27_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field networkBorderGroup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_networkBorderGroup, put = __cordl_internal_set_networkBorderGroup))::StringW networkBorderGroup;

  static inline ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass27_0* New_ctor();

  /// @brief Method <AddressRangesByNetworkBorderGroup>b__0, addr 0x21fe24c, size 0x2c, virtual false, abstract: false, final false
  inline bool _AddressRangesByNetworkBorderGroup_b__0(::Amazon::Util::AWSPublicIpAddressRange* ar);

  constexpr ::StringW const& __cordl_internal_get_networkBorderGroup() const;

  constexpr ::StringW& __cordl_internal_get_networkBorderGroup();

  constexpr void __cordl_internal_set_networkBorderGroup(::StringW value);

  /// @brief Method .ctor, addr 0x21fd5f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSPublicIpAddressRanges____c__DisplayClass27_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSPublicIpAddressRanges____c__DisplayClass27_0(__AWSPublicIpAddressRanges____c__DisplayClass27_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSPublicIpAddressRanges____c__DisplayClass27_0(__AWSPublicIpAddressRanges____c__DisplayClass27_0 const&) = delete;

  /// @brief Field networkBorderGroup, offset: 0x10, size: 0x8, def value: None
  ::StringW ___networkBorderGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass27_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass27_0, ___networkBorderGroup) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util
// Type: ::<>c__DisplayClass31_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::AWSPublicIpAddressRanges::<>c__DisplayClass31_0*
class CORDL_TYPE __AWSPublicIpAddressRanges____c__DisplayClass31_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field addressFormat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_addressFormat, put = __cordl_internal_set_addressFormat))::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat addressFormat;

  /// @brief Field prefixKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_prefixKey, put = __cordl_internal_set_prefixKey))::StringW prefixKey;

  static inline ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0* New_ctor();

  /// @brief Method <ParseRange>b__0, addr 0x21fe278, size 0x124, virtual false, abstract: false, final false
  inline ::Amazon::Util::AWSPublicIpAddressRange* _ParseRange_b__0(::ThirdParty::Json::LitJson::JsonData* range);

  constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat const& __cordl_internal_get_addressFormat() const;

  constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat& __cordl_internal_get_addressFormat();

  constexpr ::StringW const& __cordl_internal_get_prefixKey() const;

  constexpr ::StringW& __cordl_internal_get_prefixKey();

  constexpr void __cordl_internal_set_addressFormat(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat value);

  constexpr void __cordl_internal_set_prefixKey(::StringW value);

  /// @brief Method .ctor, addr 0x21fe15c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AWSPublicIpAddressRanges____c__DisplayClass31_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass31_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AWSPublicIpAddressRanges____c__DisplayClass31_0(__AWSPublicIpAddressRanges____c__DisplayClass31_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AWSPublicIpAddressRanges____c__DisplayClass31_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AWSPublicIpAddressRanges____c__DisplayClass31_0(__AWSPublicIpAddressRanges____c__DisplayClass31_0 const&) = delete;

  /// @brief Field addressFormat, offset: 0x10, size: 0x4, def value: None
  ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat ___addressFormat;

  /// @brief Field prefixKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___prefixKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0, ___addressFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0, ___prefixKey) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::AWSPublicIpAddressRanges
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::AWSPublicIpAddressRanges*
class CORDL_TYPE AWSPublicIpAddressRanges : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass25_0 = ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass25_0;

  using __c__DisplayClass26_0 = ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass26_0;

  using __c__DisplayClass27_0 = ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass27_0;

  using __c__DisplayClass31_0 = ::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0;

  __declspec(property(get = get_AllAddressRanges, put = set_AllAddressRanges))::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* AllAddressRanges;

  __declspec(property(get = get_CreateDate, put = set_CreateDate))::System::DateTime CreateDate;

  /// @brief Field IpAddressRangeEndpoint, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IpAddressRangeEndpoint, put = setStaticF_IpAddressRangeEndpoint))::System::Uri* IpAddressRangeEndpoint;

  __declspec(property(get = get_ServiceKeys))::System::Collections::Generic::IEnumerable_1<::StringW>* ServiceKeys;

  /// @brief Field <AllAddressRanges>k__BackingField, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__AllAddressRanges_k__BackingField,
               put = __cordl_internal_set__AllAddressRanges_k__BackingField))::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* _AllAddressRanges_k__BackingField;

  /// @brief Field <CreateDate>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CreateDate_k__BackingField, put = __cordl_internal_set__CreateDate_k__BackingField))::System::DateTime _CreateDate_k__BackingField;

  /// @brief Method AddressRangesByNetworkBorderGroup, addr 0x21fd4ac, size 0x148, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* AddressRangesByNetworkBorderGroup(::StringW networkBorderGroup);

  /// @brief Method AddressRangesByRegion, addr 0x21fd35c, size 0x148, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* AddressRangesByRegion(::StringW regionIdentifier);

  /// @brief Method AddressRangesByServiceKey, addr 0x21fd20c, size 0x148, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* AddressRangesByServiceKey(::StringW serviceKey);

  /// @brief Method Load, addr 0x21fd5fc, size 0x50, virtual false, abstract: false, final false
  static inline ::Amazon::Util::AWSPublicIpAddressRanges* Load();

  /// @brief Method Load, addr 0x21fd64c, size 0x28c, virtual false, abstract: false, final false
  static inline ::Amazon::Util::AWSPublicIpAddressRanges* Load(::System::Net::IWebProxy* proxy);

  static inline ::Amazon::Util::AWSPublicIpAddressRanges* New_ctor();

  /// @brief Method Parse, addr 0x21fd974, size 0x51c, virtual false, abstract: false, final false
  static inline ::Amazon::Util::AWSPublicIpAddressRanges* Parse(::StringW fileContent);

  /// @brief Method ParseRange, addr 0x21fdfb4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* ParseRange(::ThirdParty::Json::LitJson::JsonData* ranges,
                                                                                                                    ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat addressFormat);

  constexpr ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>*& __cordl_internal_get__AllAddressRanges_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>*> const&
  __cordl_internal_get__AllAddressRanges_k__BackingField() const;

  constexpr ::System::DateTime const& __cordl_internal_get__CreateDate_k__BackingField() const;

  constexpr ::System::DateTime& __cordl_internal_get__CreateDate_k__BackingField();

  constexpr void __cordl_internal_set__AllAddressRanges_k__BackingField(::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* value);

  constexpr void __cordl_internal_set__CreateDate_k__BackingField(::System::DateTime value);

  /// @brief Method .ctor, addr 0x21fde90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Uri* getStaticF_IpAddressRangeEndpoint();

  /// @brief Method get_AllAddressRanges, addr 0x21fd1fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* get_AllAddressRanges();

  /// @brief Method get_CreateDate, addr 0x21fd1ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_CreateDate();

  /// @brief Method get_ServiceKeys, addr 0x21fce48, size 0x3a4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ServiceKeys();

  static inline void setStaticF_IpAddressRangeEndpoint(::System::Uri* value);

  /// @brief Method set_AllAddressRanges, addr 0x21fd204, size 0x8, virtual false, abstract: false, final false
  inline void set_AllAddressRanges(::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* value);

  /// @brief Method set_CreateDate, addr 0x21fd1f4, size 0x8, virtual false, abstract: false, final false
  inline void set_CreateDate(::System::DateTime value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AWSPublicIpAddressRanges();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AWSPublicIpAddressRanges", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AWSPublicIpAddressRanges(AWSPublicIpAddressRanges&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AWSPublicIpAddressRanges", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AWSPublicIpAddressRanges(AWSPublicIpAddressRanges const&) = delete;

  /// @brief Field <CreateDate>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ____CreateDate_k__BackingField;

  /// @brief Field <AllAddressRanges>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::AWSPublicIpAddressRange*>* ____AllAddressRanges_k__BackingField;

  /// @brief Field AmazonServiceKey offset 0xffffffff size 0x8
  static constexpr ::ConstString AmazonServiceKey{ u"AMAZON" };

  /// @brief Field CloudFrontServiceKey offset 0xffffffff size 0x8
  static constexpr ::ConstString CloudFrontServiceKey{ u"CLOUDFRONT" };

  /// @brief Field EC2ServiceKey offset 0xffffffff size 0x8
  static constexpr ::ConstString EC2ServiceKey{ u"EC2" };

  /// @brief Field GlobalRegionIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString GlobalRegionIdentifier{ u"GLOBAL" };

  /// @brief Field Route53HealthChecksServiceKey offset 0xffffffff size 0x8
  static constexpr ::ConstString Route53HealthChecksServiceKey{ u"ROUTE53_HEALTHCHECKS" };

  /// @brief Field Route53ServiceKey offset 0xffffffff size 0x8
  static constexpr ::ConstString Route53ServiceKey{ u"ROUTE53" };

  /// @brief Field createDateFormatString offset 0xffffffff size 0x8
  static constexpr ::ConstString createDateFormatString{ u"yyyy-MM-dd-HH-mm-ss" };

  /// @brief Field createDateKey offset 0xffffffff size 0x8
  static constexpr ::ConstString createDateKey{ u"createDate" };

  /// @brief Field ipv4PrefixKey offset 0xffffffff size 0x8
  static constexpr ::ConstString ipv4PrefixKey{ u"ip_prefix" };

  /// @brief Field ipv4PrefixesKey offset 0xffffffff size 0x8
  static constexpr ::ConstString ipv4PrefixesKey{ u"prefixes" };

  /// @brief Field ipv6PrefixKey offset 0xffffffff size 0x8
  static constexpr ::ConstString ipv6PrefixKey{ u"ipv6_prefix" };

  /// @brief Field ipv6PrefixesKey offset 0xffffffff size 0x8
  static constexpr ::ConstString ipv6PrefixesKey{ u"ipv6_prefixes" };

  /// @brief Field networkBorderGroupKey offset 0xffffffff size 0x8
  static constexpr ::ConstString networkBorderGroupKey{ u"network_border_group" };

  /// @brief Field regionKey offset 0xffffffff size 0x8
  static constexpr ::ConstString regionKey{ u"region" };

  /// @brief Field serviceKey offset 0xffffffff size 0x8
  static constexpr ::ConstString serviceKey{ u"service" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::AWSPublicIpAddressRanges, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::AWSPublicIpAddressRanges, ____CreateDate_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::AWSPublicIpAddressRanges, ____AllAddressRanges_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::AWSPublicIpAddressRanges);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::AWSPublicIpAddressRanges*, "Amazon.Util", "AWSPublicIpAddressRanges");
NEED_NO_BOX(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass25_0*, "Amazon.Util", "AWSPublicIpAddressRanges/<>c__DisplayClass25_0");
NEED_NO_BOX(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass26_0*, "Amazon.Util", "AWSPublicIpAddressRanges/<>c__DisplayClass26_0");
NEED_NO_BOX(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass27_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass27_0*, "Amazon.Util", "AWSPublicIpAddressRanges/<>c__DisplayClass27_0");
NEED_NO_BOX(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__AWSPublicIpAddressRanges____c__DisplayClass31_0*, "Amazon.Util", "AWSPublicIpAddressRanges/<>c__DisplayClass31_0");
