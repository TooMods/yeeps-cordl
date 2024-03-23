#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaginationEnumerator_1)
namespace Amazon::Util {
template <typename U> class Marker_1;
}
namespace Amazon::Util {
template <typename U> class PaginatedResource_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Util {
template <typename U> class PaginationEnumerator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Amazon::Util::PaginationEnumerator_1);
// Type: Amazon.Util::PaginationEnumerator`1
// SizeInfo { instance_size: 48, native_size: 41, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// cpp template
template <typename U>
// Is value type: false
// CS Name: ::Amazon.Util::PaginationEnumerator`1<U>*
class CORDL_TYPE PaginationEnumerator_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) U Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field blankSpot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_blankSpot, put = setStaticF_blankSpot))::Amazon::Util::Marker_1<U>* blankSpot;

  /// @brief Field currentSpot, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentSpot, put = __cordl_internal_set_currentSpot))::Amazon::Util::Marker_1<U>* currentSpot;

  /// @brief Field paginatedResource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_paginatedResource, put = __cordl_internal_set_paginatedResource))::Amazon::Util::PaginatedResource_1<U>* paginatedResource;

  /// @brief Field position, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) int32_t position;

  /// @brief Field started, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started)) bool started;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<U>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Amazon::Util::PaginationEnumerator_1<U>* New_ctor(::Amazon::Util::PaginatedResource_1<U>* paginatedResource);

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::Amazon::Util::Marker_1<U>*& __cordl_internal_get_currentSpot();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Marker_1<U>*> const& __cordl_internal_get_currentSpot() const;

  constexpr ::Amazon::Util::PaginatedResource_1<U>*& __cordl_internal_get_paginatedResource();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::PaginatedResource_1<U>*> const& __cordl_internal_get_paginatedResource() const;

  constexpr int32_t const& __cordl_internal_get_position() const;

  constexpr int32_t& __cordl_internal_get_position();

  constexpr bool const& __cordl_internal_get_started() const;

  constexpr bool& __cordl_internal_get_started();

  constexpr void __cordl_internal_set_currentSpot(::Amazon::Util::Marker_1<U>* value);

  constexpr void __cordl_internal_set_paginatedResource(::Amazon::Util::PaginatedResource_1<U>* value);

  constexpr void __cordl_internal_set_position(int32_t value);

  constexpr void __cordl_internal_set_started(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Util::PaginatedResource_1<U>* paginatedResource);

  static inline ::Amazon::Util::Marker_1<U>* getStaticF_blankSpot();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline U get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<U>"
  constexpr ::System::Collections::Generic::IEnumerator_1<U>* i___System__Collections__Generic__IEnumerator_1_U_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_blankSpot(::Amazon::Util::Marker_1<U>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PaginationEnumerator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PaginationEnumerator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PaginationEnumerator_1(PaginationEnumerator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PaginationEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PaginationEnumerator_1(PaginationEnumerator_1 const&) = delete;

  /// @brief Field paginatedResource, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::PaginatedResource_1<U>* ___paginatedResource;

  /// @brief Field position, offset: 0x18, size: 0x4, def value: None
  int32_t ___position;

  /// @brief Field currentSpot, offset: 0x20, size: 0x8, def value: None
  ::Amazon::Util::Marker_1<U>* ___currentSpot;

  /// @brief Field started, offset: 0x28, size: 0x1, def value: None
  bool ___started;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Amazon::Util::PaginationEnumerator_1, "Amazon.Util", "PaginationEnumerator`1");
