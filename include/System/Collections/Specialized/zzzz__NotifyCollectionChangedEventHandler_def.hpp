#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotifyCollectionChangedEventHandler)
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Specialized {
class NotifyCollectionChangedEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::NotifyCollectionChangedEventHandler);
// Type: System.Collections.Specialized::NotifyCollectionChangedEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// CS Name: ::System.Collections.Specialized::NotifyCollectionChangedEventHandler*
class CORDL_TYPE NotifyCollectionChangedEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x18f1354, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e);

  static inline ::System::Collections::Specialized::NotifyCollectionChangedEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x18f1224, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotifyCollectionChangedEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotifyCollectionChangedEventHandler(NotifyCollectionChangedEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotifyCollectionChangedEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotifyCollectionChangedEventHandler(NotifyCollectionChangedEventHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NotifyCollectionChangedEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::NotifyCollectionChangedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, "System.Collections.Specialized", "NotifyCollectionChangedEventHandler");
