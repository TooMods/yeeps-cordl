#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(NestedComponentUtilities)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Photon::Pun {
class NestedComponentUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::NestedComponentUtilities);
// Type: Photon.Pun::NestedComponentUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::NestedComponentUtilities*
class CORDL_TYPE NestedComponentUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field nodeStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nodeStack, put = setStaticF_nodeStack))::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>* nodeStack;

  /// @brief Field nodesQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nodesQueue, put = setStaticF_nodesQueue))::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* nodesQueue;

  /// @brief Field searchLists, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_searchLists,
                             put = setStaticF_searchLists))::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::ICollection*>* searchLists;

  /// @brief Method EnsureRootComponentExists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename NestedT> static inline T EnsureRootComponentExists(::UnityEngine::Transform* transform);

  /// @brief Method GetNestedComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename NestedT> static inline T GetNestedComponentInChildren(::UnityEngine::Transform* t, bool includeInactive);

  /// @brief Method GetNestedComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename NestedT> static inline T GetNestedComponentInParent(::UnityEngine::Transform* t);

  /// @brief Method GetNestedComponentInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename NestedT> static inline T GetNestedComponentInParents(::UnityEngine::Transform* t);

  /// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename NestedT>
  static inline ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list, bool includeInactive);

  /// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list, bool includeInactive,
                                                                                         ::ArrayW<::System::Type*, ::Array<::System::Type*>*> stopOn);

  /// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename SearchT, typename NestedT>
  static inline void GetNestedComponentsInChildren(::UnityEngine::Transform* t, bool includeInactive, ::System::Collections::Generic::List_1<T>* list);

  /// @brief Method GetNestedComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetNestedComponentsInParents(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list);

  /// @brief Method GetNestedComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename NestedT> static inline void GetNestedComponentsInParents(::UnityEngine::Transform* t, ::System::Collections::Generic::List_1<T>* list);

  /// @brief Method GetParentComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetParentComponent(::UnityEngine::Transform* t);

  static inline ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>* getStaticF_nodeStack();

  static inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* getStaticF_nodesQueue();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::ICollection*>* getStaticF_searchLists();

  static inline void setStaticF_nodeStack(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>* value);

  static inline void setStaticF_nodesQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* value);

  static inline void setStaticF_searchLists(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::ICollection*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NestedComponentUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NestedComponentUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NestedComponentUtilities(NestedComponentUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NestedComponentUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NestedComponentUtilities(NestedComponentUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::NestedComponentUtilities, 0x10>, "Size mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::NestedComponentUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::NestedComponentUtilities*, "Photon.Pun", "NestedComponentUtilities");
