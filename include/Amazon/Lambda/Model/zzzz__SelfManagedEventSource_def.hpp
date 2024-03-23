#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SelfManagedEventSource)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class SelfManagedEventSource;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::SelfManagedEventSource);
// Type: Amazon.Lambda.Model::SelfManagedEventSource
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::SelfManagedEventSource*
class CORDL_TYPE SelfManagedEventSource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Endpoints, put = set_Endpoints))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* Endpoints;

  /// @brief Field _endpoints, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__endpoints,
                      put = __cordl_internal_set__endpoints))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* _endpoints;

  /// @brief Method IsSetEndpoints, addr 0x3109098, size 0x58, virtual false, abstract: false, final false
  inline bool IsSetEndpoints();

  static inline ::Amazon::Lambda::Model::SelfManagedEventSource* New_ctor();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__endpoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*> const&
  __cordl_internal_get__endpoints() const;

  constexpr void __cordl_internal_set__endpoints(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  /// @brief Method .ctor, addr 0x31090f0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Endpoints, addr 0x3109088, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* get_Endpoints();

  /// @brief Method set_Endpoints, addr 0x3109090, size 0x8, virtual false, abstract: false, final false
  inline void set_Endpoints(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelfManagedEventSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelfManagedEventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelfManagedEventSource(SelfManagedEventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelfManagedEventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelfManagedEventSource(SelfManagedEventSource const&) = delete;

  /// @brief Field _endpoints, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* ____endpoints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::SelfManagedEventSource, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::SelfManagedEventSource, ____endpoints) == 0x10, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::SelfManagedEventSource);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::SelfManagedEventSource*, "Amazon.Lambda.Model", "SelfManagedEventSource");
