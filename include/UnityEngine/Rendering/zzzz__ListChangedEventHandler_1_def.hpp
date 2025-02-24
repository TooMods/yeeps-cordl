#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListChangedEventHandler_1)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
template <typename T> class ListChangedEventArgs_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ObservableList_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class ListChangedEventHandler_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ListChangedEventHandler_1);
// Type: UnityEngine.Rendering::ListChangedEventHandler`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ListChangedEventHandler`1<T>*
class CORDL_TYPE ListChangedEventHandler_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ObservableList_1<T>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<T>* e, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::ObservableList_1<T>* sender, ::UnityEngine::Rendering::ListChangedEventArgs_1<T>* e);

  static inline ::UnityEngine::Rendering::ListChangedEventHandler_1<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListChangedEventHandler_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListChangedEventHandler_1(ListChangedEventHandler_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListChangedEventHandler_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListChangedEventHandler_1(ListChangedEventHandler_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ListChangedEventHandler_1, "UnityEngine.Rendering", "ListChangedEventHandler`1");
