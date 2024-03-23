#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskAsyncEnumerableExtensions)
namespace System::Collections::Generic {
template <typename T> class IAsyncEnumerable_1;
}
namespace System::Runtime::CompilerServices {
template <typename T> struct ConfiguredCancelableAsyncEnumerable_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskAsyncEnumerableExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskAsyncEnumerableExtensions);
// Type: System.Threading.Tasks::TaskAsyncEnumerableExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::TaskAsyncEnumerableExtensions*
class CORDL_TYPE TaskAsyncEnumerableExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method WithCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::System::Runtime::CompilerServices::ConfiguredCancelableAsyncEnumerable_1<T> WithCancellation(::System::Collections::Generic::IAsyncEnumerable_1<T>* source,
                                                                                                               ::System::Threading::CancellationToken cancellationToken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskAsyncEnumerableExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskAsyncEnumerableExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskAsyncEnumerableExtensions(TaskAsyncEnumerableExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskAsyncEnumerableExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskAsyncEnumerableExtensions(TaskAsyncEnumerableExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskAsyncEnumerableExtensions, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskAsyncEnumerableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskAsyncEnumerableExtensions*, "System.Threading.Tasks", "TaskAsyncEnumerableExtensions");
