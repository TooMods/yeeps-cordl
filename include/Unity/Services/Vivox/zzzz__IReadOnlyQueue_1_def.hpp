#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReadOnlyQueue_1)
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace Unity::Services::Vivox {
template <typename T> class QueueItemAddedEventArgs_1;
}
// Forward declare root types
namespace Unity::Services::Vivox {
template <typename T> class IReadOnlyQueue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::IReadOnlyQueue_1);
// Type: Unity.Services.Vivox::IReadOnlyQueue`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox::IReadOnlyQueue`1<T>*
class CORDL_TYPE IReadOnlyQueue_1 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Dequeue();

  /// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Peek();

  /// @brief Method add_AfterItemAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

  /// @brief Method remove_AfterItemAdded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_AfterItemAdded(::System::EventHandler_1<::Unity::Services::Vivox::QueueItemAddedEventArgs_1<T>*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadOnlyQueue_1(IReadOnlyQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadOnlyQueue_1(IReadOnlyQueue_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::IReadOnlyQueue_1, "Unity.Services.Vivox", "IReadOnlyQueue`1");
