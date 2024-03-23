#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PaginatedResource_1)
namespace Amazon::Util {
template <typename U> class Marker_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Amazon::Util {
template <typename U> class PaginatedResource_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Util::PaginatedResource_1);
// Type: Amazon.Util::PaginatedResource`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// cpp template
template <typename U>
// Is value type: false
// CS Name: ::Amazon.Util::PaginatedResource`1<U>*
class CORDL_TYPE PaginatedResource_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field fetcher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fetcher, put = __cordl_internal_set_fetcher))::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* fetcher;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<U>* GetEnumerator();

  static inline ::Amazon::Util::PaginatedResource_1<U>* New_ctor(::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* fetcher);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>*& __cordl_internal_get_fetcher();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>*> const& __cordl_internal_get_fetcher() const;

  constexpr void __cordl_internal_set_fetcher(::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* fetcher);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<U>"
  constexpr ::System::Collections::Generic::IEnumerable_1<U>* i___System__Collections__Generic__IEnumerable_1_U_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaginatedResource_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResource_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaginatedResource_1(PaginatedResource_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaginatedResource_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaginatedResource_1(PaginatedResource_1 const&) = delete;

  /// @brief Field fetcher, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::Amazon::Util::Marker_1<U>*>* ___fetcher;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Util::PaginatedResource_1, "Amazon.Util", "PaginatedResource`1");
