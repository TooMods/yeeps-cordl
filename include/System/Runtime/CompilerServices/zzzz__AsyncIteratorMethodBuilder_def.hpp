#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncIteratorMethodBuilder)
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
struct AsyncIteratorMethodBuilder;
}
// Write type traits
MARK_VAL_T(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder);
// Type: System.Runtime.CompilerServices::AsyncIteratorMethodBuilder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: true
// CS Name: ::System.Runtime.CompilerServices::AsyncIteratorMethodBuilder
struct CORDL_TYPE AsyncIteratorMethodBuilder {
public:
  // Declarations
  /// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TAwaiter, typename TStateMachine> inline void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine);

  /// @brief Method Complete, addr 0x2c55718, size 0x8, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method Create, addr 0x2c55694, size 0x84, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder Create();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TStateMachine> inline void MoveNext(ByRef<TStateMachine> stateMachine);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncIteratorMethodBuilder();

  // Ctor Parameters [CppParam { name: "_methodBuilder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "_id", ty:
  // "::System::Object*", modifiers: "", def_value: None }]
  constexpr AsyncIteratorMethodBuilder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder, ::System::Object* _id) noexcept;

  /// @brief Field _methodBuilder, offset: 0x0, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder _methodBuilder;

  /// @brief Field _id, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder, _methodBuilder) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder, _id) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncIteratorMethodBuilder, "System.Runtime.CompilerServices", "AsyncIteratorMethodBuilder");
