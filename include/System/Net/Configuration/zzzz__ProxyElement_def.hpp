#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProxyElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Configuration {
struct __ProxyElement__AutoDetectValues;
}
namespace System::Net::Configuration {
struct __ProxyElement__BypassOnLocalValues;
}
namespace System::Net::Configuration {
struct __ProxyElement__UseSystemDefaultValues;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net::Configuration {
struct __ProxyElement__AutoDetectValues;
}
namespace System::Net::Configuration {
struct __ProxyElement__BypassOnLocalValues;
}
namespace System::Net::Configuration {
struct __ProxyElement__UseSystemDefaultValues;
}
namespace System::Net::Configuration {
class ProxyElement;
}
// Write type traits
MARK_VAL_T(::System::Net::Configuration::__ProxyElement__AutoDetectValues);
MARK_VAL_T(::System::Net::Configuration::__ProxyElement__BypassOnLocalValues);
MARK_VAL_T(::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues);
MARK_REF_PTR_T(::System::Net::Configuration::ProxyElement);
// Type: ::AutoDetectValues
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: true
// CS Name: ::ProxyElement::AutoDetectValues
struct CORDL_TYPE __ProxyElement__AutoDetectValues {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ProxyElement__AutoDetectValues_Unwrapped
  enum struct ____ProxyElement__AutoDetectValues_Unwrapped : int32_t {
    __E_False = static_cast<int32_t>(0x0),
    __E_True = static_cast<int32_t>(0x1),
    __E_Unspecified = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProxyElement__AutoDetectValues_Unwrapped() const noexcept {
    return static_cast<____ProxyElement__AutoDetectValues_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProxyElement__AutoDetectValues();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProxyElement__AutoDetectValues(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field False value: static_cast<int32_t>(0x0)
  static ::System::Net::Configuration::__ProxyElement__AutoDetectValues const False;

  /// @brief Field True value: static_cast<int32_t>(0x1)
  static ::System::Net::Configuration::__ProxyElement__AutoDetectValues const True;

  /// @brief Field Unspecified value: static_cast<int32_t>(0xffffffff)
  static ::System::Net::Configuration::__ProxyElement__AutoDetectValues const Unspecified;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::__ProxyElement__AutoDetectValues, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::__ProxyElement__AutoDetectValues, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Configuration
// Type: ::BypassOnLocalValues
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: true
// CS Name: ::ProxyElement::BypassOnLocalValues
struct CORDL_TYPE __ProxyElement__BypassOnLocalValues {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ProxyElement__BypassOnLocalValues_Unwrapped
  enum struct ____ProxyElement__BypassOnLocalValues_Unwrapped : int32_t {
    __E_False = static_cast<int32_t>(0x0),
    __E_True = static_cast<int32_t>(0x1),
    __E_Unspecified = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProxyElement__BypassOnLocalValues_Unwrapped() const noexcept {
    return static_cast<____ProxyElement__BypassOnLocalValues_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProxyElement__BypassOnLocalValues();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProxyElement__BypassOnLocalValues(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field False value: static_cast<int32_t>(0x0)
  static ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues const False;

  /// @brief Field True value: static_cast<int32_t>(0x1)
  static ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues const True;

  /// @brief Field Unspecified value: static_cast<int32_t>(0xffffffff)
  static ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues const Unspecified;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::__ProxyElement__BypassOnLocalValues, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::__ProxyElement__BypassOnLocalValues, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Configuration
// Type: ::UseSystemDefaultValues
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: true
// CS Name: ::ProxyElement::UseSystemDefaultValues
struct CORDL_TYPE __ProxyElement__UseSystemDefaultValues {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ProxyElement__UseSystemDefaultValues_Unwrapped
  enum struct ____ProxyElement__UseSystemDefaultValues_Unwrapped : int32_t {
    __E_False = static_cast<int32_t>(0x0),
    __E_True = static_cast<int32_t>(0x1),
    __E_Unspecified = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ProxyElement__UseSystemDefaultValues_Unwrapped() const noexcept {
    return static_cast<____ProxyElement__UseSystemDefaultValues_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProxyElement__UseSystemDefaultValues();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ProxyElement__UseSystemDefaultValues(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field False value: static_cast<int32_t>(0x0)
  static ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues const False;

  /// @brief Field True value: static_cast<int32_t>(0x1)
  static ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues const True;

  /// @brief Field Unspecified value: static_cast<int32_t>(0xffffffff)
  static ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues const Unspecified;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Configuration
// Type: System.Net.Configuration::ProxyElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: false
// CS Name: ::System.Net.Configuration::ProxyElement*
class CORDL_TYPE ProxyElement : public ::System::Configuration::ConfigurationElement {
public:
  // Declarations
  using AutoDetectValues = ::System::Net::Configuration::__ProxyElement__AutoDetectValues;

  using BypassOnLocalValues = ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues;

  using UseSystemDefaultValues = ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues;

  __declspec(property(get = get_AutoDetect, put = set_AutoDetect))::System::Net::Configuration::__ProxyElement__AutoDetectValues AutoDetect;

  __declspec(property(get = get_BypassOnLocal, put = set_BypassOnLocal))::System::Net::Configuration::__ProxyElement__BypassOnLocalValues BypassOnLocal;

  __declspec(property(get = get_Properties))::System::Configuration::ConfigurationPropertyCollection* Properties;

  __declspec(property(get = get_ProxyAddress, put = set_ProxyAddress))::System::Uri* ProxyAddress;

  __declspec(property(get = get_ScriptLocation, put = set_ScriptLocation))::System::Uri* ScriptLocation;

  __declspec(property(get = get_UseSystemDefault, put = set_UseSystemDefault))::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues UseSystemDefault;

  static inline ::System::Net::Configuration::ProxyElement* New_ctor();

  /// @brief Method .ctor, addr 0x18cd9ec, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AutoDetect, addr 0x18cda24, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::__ProxyElement__AutoDetectValues get_AutoDetect();

  /// @brief Method get_BypassOnLocal, addr 0x18cda94, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::__ProxyElement__BypassOnLocalValues get_BypassOnLocal();

  /// @brief Method get_Properties, addr 0x18cdb04, size 0x38, virtual true, abstract: false, final false
  inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties();

  /// @brief Method get_ProxyAddress, addr 0x18cdb3c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Uri* get_ProxyAddress();

  /// @brief Method get_ScriptLocation, addr 0x18cdbac, size 0x38, virtual false, abstract: false, final false
  inline ::System::Uri* get_ScriptLocation();

  /// @brief Method get_UseSystemDefault, addr 0x18cdc1c, size 0x38, virtual false, abstract: false, final false
  inline ::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues get_UseSystemDefault();

  /// @brief Method set_AutoDetect, addr 0x18cda5c, size 0x38, virtual false, abstract: false, final false
  inline void set_AutoDetect(::System::Net::Configuration::__ProxyElement__AutoDetectValues value);

  /// @brief Method set_BypassOnLocal, addr 0x18cdacc, size 0x38, virtual false, abstract: false, final false
  inline void set_BypassOnLocal(::System::Net::Configuration::__ProxyElement__BypassOnLocalValues value);

  /// @brief Method set_ProxyAddress, addr 0x18cdb74, size 0x38, virtual false, abstract: false, final false
  inline void set_ProxyAddress(::System::Uri* value);

  /// @brief Method set_ScriptLocation, addr 0x18cdbe4, size 0x38, virtual false, abstract: false, final false
  inline void set_ScriptLocation(::System::Uri* value);

  /// @brief Method set_UseSystemDefault, addr 0x18cdc54, size 0x38, virtual false, abstract: false, final false
  inline void set_UseSystemDefault(::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProxyElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProxyElement(ProxyElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProxyElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProxyElement(ProxyElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ProxyElement, 0x10>, "Size mismatch!");

} // namespace System::Net::Configuration
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::__ProxyElement__AutoDetectValues, "System.Net.Configuration", "ProxyElement/AutoDetectValues");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::__ProxyElement__BypassOnLocalValues, "System.Net.Configuration", "ProxyElement/BypassOnLocalValues");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::__ProxyElement__UseSystemDefaultValues, "System.Net.Configuration", "ProxyElement/UseSystemDefaultValues");
NEED_NO_BOX(::System::Net::Configuration::ProxyElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ProxyElement*, "System.Net.Configuration", "ProxyElement");
