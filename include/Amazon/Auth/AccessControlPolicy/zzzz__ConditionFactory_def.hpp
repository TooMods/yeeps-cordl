#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConditionFactory)
namespace Amazon::Auth::AccessControlPolicy {
class Condition;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__ArnComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__DateComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__IpAddressComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__NumericComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__StringComparisonType;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__ArnComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__DateComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__IpAddressComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__NumericComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
struct __ConditionFactory__StringComparisonType;
}
namespace Amazon::Auth::AccessControlPolicy {
class ConditionFactory;
}
// Write type traits
MARK_VAL_T(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType);
MARK_VAL_T(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType);
MARK_VAL_T(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType);
MARK_VAL_T(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType);
MARK_VAL_T(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType);
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ConditionFactory);
// Type: ::ArnComparisonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: true
// CS Name: ::ConditionFactory::ArnComparisonType
struct CORDL_TYPE __ConditionFactory__ArnComparisonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ConditionFactory__ArnComparisonType_Unwrapped
  enum struct ____ConditionFactory__ArnComparisonType_Unwrapped : int32_t {
    __E_ArnEquals = static_cast<int32_t>(0x0),
    __E_ArnLike = static_cast<int32_t>(0x1),
    __E_ArnNotEquals = static_cast<int32_t>(0x2),
    __E_ArnNotLike = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConditionFactory__ArnComparisonType_Unwrapped() const noexcept {
    return static_cast<____ConditionFactory__ArnComparisonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConditionFactory__ArnComparisonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConditionFactory__ArnComparisonType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ArnEquals value: static_cast<int32_t>(0x0)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType const ArnEquals;

  /// @brief Field ArnLike value: static_cast<int32_t>(0x1)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType const ArnLike;

  /// @brief Field ArnNotEquals value: static_cast<int32_t>(0x2)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType const ArnNotEquals;

  /// @brief Field ArnNotLike value: static_cast<int32_t>(0x3)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType const ArnNotLike;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: ::DateComparisonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: true
// CS Name: ::ConditionFactory::DateComparisonType
struct CORDL_TYPE __ConditionFactory__DateComparisonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ConditionFactory__DateComparisonType_Unwrapped
  enum struct ____ConditionFactory__DateComparisonType_Unwrapped : int32_t {
    __E_DateEquals = static_cast<int32_t>(0x0),
    __E_DateGreaterThan = static_cast<int32_t>(0x1),
    __E_DateGreaterThanEquals = static_cast<int32_t>(0x2),
    __E_DateLessThan = static_cast<int32_t>(0x3),
    __E_DateLessThanEquals = static_cast<int32_t>(0x4),
    __E_DateNotEquals = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConditionFactory__DateComparisonType_Unwrapped() const noexcept {
    return static_cast<____ConditionFactory__DateComparisonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConditionFactory__DateComparisonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConditionFactory__DateComparisonType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DateEquals value: static_cast<int32_t>(0x0)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType const DateEquals;

  /// @brief Field DateGreaterThan value: static_cast<int32_t>(0x1)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType const DateGreaterThan;

  /// @brief Field DateGreaterThanEquals value: static_cast<int32_t>(0x2)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType const DateGreaterThanEquals;

  /// @brief Field DateLessThan value: static_cast<int32_t>(0x3)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType const DateLessThan;

  /// @brief Field DateLessThanEquals value: static_cast<int32_t>(0x4)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType const DateLessThanEquals;

  /// @brief Field DateNotEquals value: static_cast<int32_t>(0x5)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType const DateNotEquals;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: ::IpAddressComparisonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: true
// CS Name: ::ConditionFactory::IpAddressComparisonType
struct CORDL_TYPE __ConditionFactory__IpAddressComparisonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ConditionFactory__IpAddressComparisonType_Unwrapped
  enum struct ____ConditionFactory__IpAddressComparisonType_Unwrapped : int32_t {
    __E_IpAddress = static_cast<int32_t>(0x0),
    __E_NotIpAddress = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConditionFactory__IpAddressComparisonType_Unwrapped() const noexcept {
    return static_cast<____ConditionFactory__IpAddressComparisonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConditionFactory__IpAddressComparisonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConditionFactory__IpAddressComparisonType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IpAddress value: static_cast<int32_t>(0x0)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType const IpAddress;

  /// @brief Field NotIpAddress value: static_cast<int32_t>(0x1)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType const NotIpAddress;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: ::NumericComparisonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: true
// CS Name: ::ConditionFactory::NumericComparisonType
struct CORDL_TYPE __ConditionFactory__NumericComparisonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ConditionFactory__NumericComparisonType_Unwrapped
  enum struct ____ConditionFactory__NumericComparisonType_Unwrapped : int32_t {
    __E_NumericEquals = static_cast<int32_t>(0x0),
    __E_NumericGreaterThan = static_cast<int32_t>(0x1),
    __E_NumericGreaterThanEquals = static_cast<int32_t>(0x2),
    __E_NumericLessThan = static_cast<int32_t>(0x3),
    __E_NumericLessThanEquals = static_cast<int32_t>(0x4),
    __E_NumericNotEquals = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConditionFactory__NumericComparisonType_Unwrapped() const noexcept {
    return static_cast<____ConditionFactory__NumericComparisonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConditionFactory__NumericComparisonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConditionFactory__NumericComparisonType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NumericEquals value: static_cast<int32_t>(0x0)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType const NumericEquals;

  /// @brief Field NumericGreaterThan value: static_cast<int32_t>(0x1)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType const NumericGreaterThan;

  /// @brief Field NumericGreaterThanEquals value: static_cast<int32_t>(0x2)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType const NumericGreaterThanEquals;

  /// @brief Field NumericLessThan value: static_cast<int32_t>(0x3)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType const NumericLessThan;

  /// @brief Field NumericLessThanEquals value: static_cast<int32_t>(0x4)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType const NumericLessThanEquals;

  /// @brief Field NumericNotEquals value: static_cast<int32_t>(0x5)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType const NumericNotEquals;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: ::StringComparisonType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: true
// CS Name: ::ConditionFactory::StringComparisonType
struct CORDL_TYPE __ConditionFactory__StringComparisonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ConditionFactory__StringComparisonType_Unwrapped
  enum struct ____ConditionFactory__StringComparisonType_Unwrapped : int32_t {
    __E_StringEquals = static_cast<int32_t>(0x0),
    __E_StringEqualsIgnoreCase = static_cast<int32_t>(0x1),
    __E_StringLike = static_cast<int32_t>(0x2),
    __E_StringNotEquals = static_cast<int32_t>(0x3),
    __E_StringNotEqualsIgnoreCase = static_cast<int32_t>(0x4),
    __E_StringNotLike = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ConditionFactory__StringComparisonType_Unwrapped() const noexcept {
    return static_cast<____ConditionFactory__StringComparisonType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConditionFactory__StringComparisonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ConditionFactory__StringComparisonType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field StringEquals value: static_cast<int32_t>(0x0)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType const StringEquals;

  /// @brief Field StringEqualsIgnoreCase value: static_cast<int32_t>(0x1)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType const StringEqualsIgnoreCase;

  /// @brief Field StringLike value: static_cast<int32_t>(0x2)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType const StringLike;

  /// @brief Field StringNotEquals value: static_cast<int32_t>(0x3)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType const StringNotEquals;

  /// @brief Field StringNotEqualsIgnoreCase value: static_cast<int32_t>(0x4)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType const StringNotEqualsIgnoreCase;

  /// @brief Field StringNotLike value: static_cast<int32_t>(0x5)
  static ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType const StringNotLike;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
// Type: Amazon.Auth.AccessControlPolicy::ConditionFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy::ConditionFactory*
class CORDL_TYPE ConditionFactory : public ::System::Object {
public:
  // Declarations
  using ArnComparisonType = ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType;

  using DateComparisonType = ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType;

  using IpAddressComparisonType = ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType;

  using NumericComparisonType = ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType;

  using StringComparisonType = ::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType;

  /// @brief Method NewCannedACLCondition, addr 0x25e9a8c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewCannedACLCondition(::StringW cannedAcl);

  /// @brief Method NewCondition, addr 0x25e9270, size 0x108, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewCondition(::StringW key, bool value);

  /// @brief Method NewCondition, addr 0x25e9154, size 0x11c, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType type, ::StringW key, ::StringW value);

  /// @brief Method NewCondition, addr 0x25e9378, size 0x184, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType type, ::System::DateTime date);

  /// @brief Method NewCondition, addr 0x25e969c, size 0x128, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType type, ::StringW ipAddressRange);

  /// @brief Method NewCondition, addr 0x25e97c4, size 0x11c, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType type, ::StringW key, ::StringW value);

  /// @brief Method NewCondition, addr 0x25e98e0, size 0x11c, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewCondition(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType type, ::StringW key, ::StringW value);

  /// @brief Method NewConditionUtc, addr 0x25e94fc, size 0x194, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewConditionUtc(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType type, ::System::DateTime date);

  /// @brief Method NewEndpointCondition, addr 0x25e9ad8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewEndpointCondition(::StringW endpointPattern);

  /// @brief Method NewIpAddressCondition, addr 0x25e9690, size 0xc, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewIpAddressCondition(::StringW ipAddressRange);

  /// @brief Method NewProtocolCondition, addr 0x25e9b24, size 0x4c, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewProtocolCondition(::StringW protocol);

  /// @brief Method NewSecureTransportCondition, addr 0x25e9a48, size 0x44, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewSecureTransportCondition();

  /// @brief Method NewSourceArnCondition, addr 0x25e99fc, size 0x4c, virtual false, abstract: false, final false
  static inline ::Amazon::Auth::AccessControlPolicy::Condition* NewSourceArnCondition(::StringW arnPattern);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConditionFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConditionFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConditionFactory(ConditionFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConditionFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConditionFactory(ConditionFactory const&) = delete;

  /// @brief Field CURRENT_TIME_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CURRENT_TIME_CONDITION_KEY{ u"aws:CurrentTime" };

  /// @brief Field EPOCH_TIME_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString EPOCH_TIME_CONDITION_KEY{ u"aws:EpochTime" };

  /// @brief Field REFERRER_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString REFERRER_CONDITION_KEY{ u"aws:Referer" };

  /// @brief Field S3_CANNED_ACL_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_CANNED_ACL_CONDITION_KEY{ u"s3:x-amz-acl" };

  /// @brief Field S3_COPY_SOURCE_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_COPY_SOURCE_CONDITION_KEY{ u"s3:x-amz-copy-source" };

  /// @brief Field S3_DELIMITER_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_DELIMITER_CONDITION_KEY{ u"s3:delimiter" };

  /// @brief Field S3_LOCATION_CONSTRAINT_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_LOCATION_CONSTRAINT_CONDITION_KEY{ u"s3:LocationConstraint" };

  /// @brief Field S3_MAX_KEYS_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_MAX_KEYS_CONDITION_KEY{ u"s3:max-keys" };

  /// @brief Field S3_METADATA_DIRECTIVE_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_METADATA_DIRECTIVE_CONDITION_KEY{ u"s3:x-amz-metadata-directive" };

  /// @brief Field S3_PREFIX_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_PREFIX_CONDITION_KEY{ u"s3:prefix" };

  /// @brief Field S3_VERSION_ID_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString S3_VERSION_ID_CONDITION_KEY{ u"s3:VersionId" };

  /// @brief Field SECURE_TRANSPORT_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SECURE_TRANSPORT_CONDITION_KEY{ u"aws:SecureTransport" };

  /// @brief Field SNS_ENDPOINT_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SNS_ENDPOINT_CONDITION_KEY{ u"sns:Endpoint" };

  /// @brief Field SNS_PROTOCOL_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SNS_PROTOCOL_CONDITION_KEY{ u"sns:Protocol" };

  /// @brief Field SOURCE_ACCOUNT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SOURCE_ACCOUNT_KEY{ u"aws:SourceAccount" };

  /// @brief Field SOURCE_ARN_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SOURCE_ARN_CONDITION_KEY{ u"aws:SourceArn" };

  /// @brief Field SOURCE_IP_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString SOURCE_IP_CONDITION_KEY{ u"aws:SourceIp" };

  /// @brief Field USER_AGENT_CONDITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString USER_AGENT_CONDITION_KEY{ u"aws:UserAgent" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ConditionFactory, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__ArnComparisonType, "Amazon.Auth.AccessControlPolicy", "ConditionFactory/ArnComparisonType");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__DateComparisonType, "Amazon.Auth.AccessControlPolicy", "ConditionFactory/DateComparisonType");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__IpAddressComparisonType, "Amazon.Auth.AccessControlPolicy", "ConditionFactory/IpAddressComparisonType");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__NumericComparisonType, "Amazon.Auth.AccessControlPolicy", "ConditionFactory/NumericComparisonType");
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::__ConditionFactory__StringComparisonType, "Amazon.Auth.AccessControlPolicy", "ConditionFactory/StringComparisonType");
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ConditionFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ConditionFactory*, "Amazon.Auth.AccessControlPolicy", "ConditionFactory");
