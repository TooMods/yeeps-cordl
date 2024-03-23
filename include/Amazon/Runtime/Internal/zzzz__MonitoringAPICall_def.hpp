#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonitoringAPICall)
namespace Amazon::Runtime::Internal {
struct __MonitoringAPICall__CSMType;
}
namespace Amazon::Runtime {
class IRequestContext;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
struct __MonitoringAPICall__CSMType;
}
namespace Amazon::Runtime::Internal {
class MonitoringAPICall;
}
// Write type traits
MARK_VAL_T(::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType);
MARK_REF_PTR_T(::Amazon::Runtime::Internal::MonitoringAPICall);
// Type: ::CSMType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: true
// CS Name: ::MonitoringAPICall::CSMType
struct CORDL_TYPE __MonitoringAPICall__CSMType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MonitoringAPICall__CSMType_Unwrapped
  enum struct ____MonitoringAPICall__CSMType_Unwrapped : int32_t {
    __E_ApiCall = static_cast<int32_t>(0x0),
    __E_ApiCallAttempt = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MonitoringAPICall__CSMType_Unwrapped() const noexcept {
    return static_cast<____MonitoringAPICall__CSMType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonitoringAPICall__CSMType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MonitoringAPICall__CSMType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ApiCall value: static_cast<int32_t>(0x0)
  static ::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType const ApiCall;

  /// @brief Field ApiCallAttempt value: static_cast<int32_t>(0x1)
  static ::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType const ApiCallAttempt;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
// Type: Amazon.Runtime.Internal::MonitoringAPICall
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::MonitoringAPICall*
class CORDL_TYPE MonitoringAPICall : public ::System::Object {
public:
  // Declarations
  using CSMType = ::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType;

  __declspec(property(get = get_Api, put = set_Api))::StringW Api;

  __declspec(property(get = get_ClientId, put = set_ClientId))::StringW ClientId;

  __declspec(property(get = get_Region, put = set_Region))::StringW Region;

  __declspec(property(get = get_Service, put = set_Service))::StringW Service;

  __declspec(property(get = get_Timestamp, put = set_Timestamp)) int64_t Timestamp;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  __declspec(property(get = get_UserAgent, put = set_UserAgent))::StringW UserAgent;

  __declspec(property(get = get_Version, put = set_Version)) int32_t Version;

  /// @brief Field <Api>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Api_k__BackingField, put = __cordl_internal_set__Api_k__BackingField))::StringW _Api_k__BackingField;

  /// @brief Field <ClientId>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__ClientId_k__BackingField, put = __cordl_internal_set__ClientId_k__BackingField))::StringW _ClientId_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Region_k__BackingField, put = __cordl_internal_set__Region_k__BackingField))::StringW _Region_k__BackingField;

  /// @brief Field <Service>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Service_k__BackingField, put = __cordl_internal_set__Service_k__BackingField))::StringW _Service_k__BackingField;

  /// @brief Field <Timestamp>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Timestamp_k__BackingField, put = __cordl_internal_set__Timestamp_k__BackingField)) int64_t _Timestamp_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::StringW _Type_k__BackingField;

  /// @brief Field <UserAgent>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__UserAgent_k__BackingField, put = __cordl_internal_set__UserAgent_k__BackingField))::StringW _UserAgent_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__Version_k__BackingField, put = __cordl_internal_set__Version_k__BackingField)) int32_t _Version_k__BackingField;

  static inline ::Amazon::Runtime::Internal::MonitoringAPICall* New_ctor();

  static inline ::Amazon::Runtime::Internal::MonitoringAPICall* New_ctor(::Amazon::Runtime::IRequestContext* requestContext);

  constexpr ::StringW const& __cordl_internal_get__Api_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Api_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__ClientId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__ClientId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Region_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Region_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Service_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Service_k__BackingField();

  constexpr int64_t const& __cordl_internal_get__Timestamp_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__Timestamp_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Type_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__UserAgent_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__UserAgent_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__Version_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__Version_k__BackingField();

  constexpr void __cordl_internal_set__Api_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__ClientId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Region_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Service_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Timestamp_k__BackingField(int64_t value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__UserAgent_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Version_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x23d52cc, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23d5068, size 0x264, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IRequestContext* requestContext);

  /// @brief Method get_Api, addr 0x23d53f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Api();

  /// @brief Method get_ClientId, addr 0x23d5414, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClientId();

  /// @brief Method get_Region, addr 0x23d5454, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Region();

  /// @brief Method get_Service, addr 0x23d5404, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Service();

  /// @brief Method get_Timestamp, addr 0x23d5424, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Timestamp();

  /// @brief Method get_Type, addr 0x23d5434, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method get_UserAgent, addr 0x23d5464, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_UserAgent();

  /// @brief Method get_Version, addr 0x23d5444, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method set_Api, addr 0x23d53fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Api(::StringW value);

  /// @brief Method set_ClientId, addr 0x23d541c, size 0x8, virtual false, abstract: false, final false
  inline void set_ClientId(::StringW value);

  /// @brief Method set_Region, addr 0x23d545c, size 0x8, virtual false, abstract: false, final false
  inline void set_Region(::StringW value);

  /// @brief Method set_Service, addr 0x23d540c, size 0x8, virtual false, abstract: false, final false
  inline void set_Service(::StringW value);

  /// @brief Method set_Timestamp, addr 0x23d542c, size 0x8, virtual false, abstract: false, final false
  inline void set_Timestamp(int64_t value);

  /// @brief Method set_Type, addr 0x23d543c, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

  /// @brief Method set_UserAgent, addr 0x23d546c, size 0x8, virtual false, abstract: false, final false
  inline void set_UserAgent(::StringW value);

  /// @brief Method set_Version, addr 0x23d544c, size 0x8, virtual false, abstract: false, final false
  inline void set_Version(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonitoringAPICall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonitoringAPICall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonitoringAPICall(MonitoringAPICall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonitoringAPICall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonitoringAPICall(MonitoringAPICall const&) = delete;

  /// @brief Field <Api>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Api_k__BackingField;

  /// @brief Field <Service>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Service_k__BackingField;

  /// @brief Field <ClientId>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____ClientId_k__BackingField;

  /// @brief Field <Timestamp>k__BackingField, offset: 0x28, size: 0x8, def value: None
  int64_t ____Timestamp_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Type_k__BackingField;

  /// @brief Field <Version>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____Version_k__BackingField;

  /// @brief Field <Region>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____Region_k__BackingField;

  /// @brief Field <UserAgent>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::StringW ____UserAgent_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::MonitoringAPICall, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____Api_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____Service_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____ClientId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____Timestamp_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____Type_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____Version_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____Region_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::MonitoringAPICall, ____UserAgent_k__BackingField) == 0x48, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType, "Amazon.Runtime.Internal", "MonitoringAPICall/CSMType");
NEED_NO_BOX(::Amazon::Runtime::Internal::MonitoringAPICall);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::MonitoringAPICall*, "Amazon.Runtime.Internal", "MonitoringAPICall");
