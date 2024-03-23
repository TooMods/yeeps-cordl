#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServiceFactory)
namespace Amazon::Util::Internal::PlatformServices {
struct __ServiceFactory__InstantiationModel;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
struct __ServiceFactory__InstantiationModel;
}
namespace Amazon::Util::Internal::PlatformServices {
class ServiceFactory;
}
// Write type traits
MARK_VAL_T(::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel);
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::ServiceFactory);
// Type: ::InstantiationModel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: true
// CS Name: ::ServiceFactory::InstantiationModel
struct CORDL_TYPE __ServiceFactory__InstantiationModel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ServiceFactory__InstantiationModel_Unwrapped
  enum struct ____ServiceFactory__InstantiationModel_Unwrapped : int32_t {
    __E_Singleton = static_cast<int32_t>(0x0),
    __E_InstancePerCall = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ServiceFactory__InstantiationModel_Unwrapped() const noexcept {
    return static_cast<____ServiceFactory__InstantiationModel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ServiceFactory__InstantiationModel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ServiceFactory__InstantiationModel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InstancePerCall value: static_cast<int32_t>(0x1)
  static ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel const InstancePerCall;

  /// @brief Field Singleton value: static_cast<int32_t>(0x0)
  static ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel const Singleton;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel, 0x4>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel, value__) == 0x0, "Offset mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
// Type: Amazon.Util.Internal.PlatformServices::ServiceFactory
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::ServiceFactory*
class CORDL_TYPE ServiceFactory : public ::System::Object {
public:
  // Declarations
  using InstantiationModel = ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Amazon::Util::Internal::PlatformServices::ServiceFactory* Instance;

  /// @brief Field _factoryInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__factoryInitialized, put = setStaticF__factoryInitialized)) bool _factoryInitialized;

  /// @brief Field _instantationMappings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__instantationMappings, put = __cordl_internal_set__instantationMappings))::System::Collections::Generic::IDictionary_2<
      ::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>* _instantationMappings;

  /// @brief Field _lock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__lock, put = setStaticF__lock))::System::Object* _lock;

  /// @brief Field _mappings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__mappings, put = setStaticF__mappings))::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>* _mappings;

  /// @brief Field _singletonServices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__singletonServices,
                      put = __cordl_internal_set__singletonServices))::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>* _singletonServices;

  /// @brief Method GetService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetService();

  /// @brief Method GetServiceType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Type* GetServiceType();

  static inline ::Amazon::Util::Internal::PlatformServices::ServiceFactory* New_ctor();

  /// @brief Method RegisterService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RegisterService(::System::Type* serviceType);

  constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>*&
  __cordl_internal_get__instantationMappings();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>*> const&
  __cordl_internal_get__instantationMappings() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>*& __cordl_internal_get__singletonServices();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>*> const& __cordl_internal_get__singletonServices() const;

  constexpr void
  __cordl_internal_set__instantationMappings(::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>* value);

  constexpr void __cordl_internal_set__singletonServices(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x1fda324, size 0x60c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Amazon::Util::Internal::PlatformServices::ServiceFactory* getStaticF_Instance();

  static inline bool getStaticF__factoryInitialized();

  static inline ::System::Object* getStaticF__lock();

  static inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>* getStaticF__mappings();

  static inline void setStaticF_Instance(::Amazon::Util::Internal::PlatformServices::ServiceFactory* value);

  static inline void setStaticF__factoryInitialized(bool value);

  static inline void setStaticF__lock(::System::Object* value);

  static inline void setStaticF__mappings(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServiceFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServiceFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServiceFactory(ServiceFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServiceFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServiceFactory(ServiceFactory const&) = delete;

  /// @brief Field _instantationMappings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>* ____instantationMappings;

  /// @brief Field _singletonServices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>* ____singletonServices;

  /// @brief Field NotImplementedErrorMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString NotImplementedErrorMessage{ u"This functionality is not implemented in the portable version of this assembly. You should reference the AWSSDK.Core NuGet package from "
                                                             u"your main application project in order to reference the platform-specific implementation." };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::ServiceFactory, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::ServiceFactory, ____instantationMappings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::PlatformServices::ServiceFactory, ____singletonServices) == 0x18, "Offset mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel, "Amazon.Util.Internal.PlatformServices", "ServiceFactory/InstantiationModel");
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::ServiceFactory);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::ServiceFactory*, "Amazon.Util.Internal.PlatformServices", "ServiceFactory");
